#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int tamanho,contador =0;
	ifstream arqEntrada("entrada.txt");
	ofstream arqSaida("saida.txt");
	arqEntrada >> tamanho;
	int vetorEntrada[tamanho];
	int vetorSaida[tamanho];
	while(arqEntrada >> vetorEntrada[contador]){
		vetorSaida[contador] = 0;
		contador++;
	}
	for(int i =0;i < tamanho; i++){
		for(int e =0;e < tamanho; e++){
			if(vetorEntrada[i] == vetorSaida[e]){
				e = tamanho;
			}else if(vetorSaida[e] == 0){
				vetorSaida[e] = vetorEntrada[i];
				e = tamanho;
			}
		}
	}
	for(int i =0;i < tamanho; i++){
		if(vetorSaida[i] != 0){
			arqSaida << vetorSaida[i]<<" ";
		}
	}
	return 0;
}
