#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int vetorNumeros[50];
	string vetorPalavras[50];
	int contador =0,contador2 =0;
	ifstream arqPalavras("palavras.txt");
	ifstream arqNumeros("numeros.txt");
	ofstream arqSaida("frase.txt");
	while(arqNumeros >> vetorNumeros[contador]){
		cout <<vetorNumeros[contador]<<endl;
		contador++;
		
	}
	while(arqPalavras >> vetorPalavras[contador2]){
		cout <<vetorPalavras[contador2]<<endl;
		contador2++;
		
	}
	for(int i =0; i < contador;i++){
		arqSaida<<vetorPalavras[vetorNumeros[i]-1]<<" ";
	}
	arqPalavras.close();
	arqNumeros.close();
	arqSaida.close();
	return 0;
}
