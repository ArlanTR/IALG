#include <iostream>
using namespace std;
int main(){
	int linhas,colunas,numeroBuscar,resultado = 0;
	int **matriz;
	cin >> linhas >> colunas;
	matriz = new int *[colunas];
	for(int i = 0; i < linhas; i++){
		matriz[i] = new int [linhas];
	}
	for(int i = 0; i < colunas; i++){
		for(int e = 0; e < linhas; e++){
			cin >> matriz[i][e];
		}
	}
	cin >> numeroBuscar;
	for(int i = 0; i < colunas; i++){
		for(int e = 0; e < linhas; e++){
			if(numeroBuscar == matriz[i][e]){
				resultado = 1;
			}
		}
	}
	cout << resultado;
	for(int i = 0; i < linhas; i++){
		delete[] matriz[i];
	}
	delete []matriz;
	return 0;
}
