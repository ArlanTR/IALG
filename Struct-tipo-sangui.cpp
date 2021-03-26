#include <iostream>
using namespace std;
struct Doador{
	string nome;
	string tipo;
};
int main (){
	int N;
	string tipoNescessario;
	cin >>N;
	Doador Cadastro[N];
	for(int i = 0; i < N;i++){
		cin >> Cadastro[i].nome;
		cin >> Cadastro[i].tipo;
	}
	cin >> tipoNescessario;
	if(tipoNescessario == "AB"){
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "AB"){
				cout << Cadastro[i].nome<<endl;
			}
		}
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "A"){
				cout << Cadastro[i].nome<<endl;
			}
		}
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "B"){
				cout << Cadastro[i].nome<<endl;
			}
		}
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "O"){
				cout << Cadastro[i].nome<<endl;
			}
		}
	}
	if(tipoNescessario == "A"){
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "A"){
				cout << Cadastro[i].nome<<endl;
			}
		}
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "O"){
				cout << Cadastro[i].nome<<endl;
			}
		}
	}
	if(tipoNescessario == "B"){
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "B"){
				cout << Cadastro[i].nome<<endl;
			}
		}
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "O"){
				cout << Cadastro[i].nome<<endl;
			}
		}
	}
	if(tipoNescessario == "O"){
		for(int i = 0; i < N;i++){
			if(Cadastro[i].tipo == "O"){
				cout << Cadastro[i].nome<<endl;
			}
		}
	}
	
return 0;
}
