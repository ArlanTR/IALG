#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int vetor[100];
	int contador=0;
	ifstream entrada("entrada.txt");
	ofstream saida("saida.txt");
	while( entrada >> vetor[contador]){
		contador ++;
	}
	for(int i = contador-1; i >=0;i--){
		saida << vetor[i]<<" ";
	}
	entrada.close();
	saida.close();
	return 0;
}
