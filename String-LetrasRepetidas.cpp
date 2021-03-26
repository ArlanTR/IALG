#include <iostream>
#include <string>
using namespace std;
int main(){
	string palavra;
	char letra;
	bool achou = false;
	int quantidade,repetidas =0;
	cin >> palavra;
	quantidade = palavra.length();
	for(int i = 0;i < quantidade;i++){
		letra = palavra[i];
		for(int i = 0;i < quantidade;i++){
			if(palavra[i] == letra and achou == false ){
				repetidas ++;
			}
		}
		if(repetidas == 1){
			cout << letra;
			achou = true;
		}
		repetidas = 0;
	}

return 0;
}
