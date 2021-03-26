#include <iostream>
using namespace std;
int main(){
	int coluna,linha;
	cin >> coluna >> linha;
	int matriz [coluna][linha];
	for(int i = 0; i < coluna; i++){
		for(int e =0; e < linha; e++){
			cin >> matriz[i][e];
		}
	}
	for(int i = 0; i < linha; i++){
		for(int e =0; e < coluna; e++){
			cout << matriz[e][i]<< " ";
		}
		cout <<endl;
	}
	return 0;
}
