#include <iostream>
using namespace std;
struct gnomos{
	string nome;
	int horaC[7];
	int horaS[7];
};
int main (){
	int N;
	cin >> N;
	gnomos Cadastro[N];
	int TotalHoras[N];
	for(int i = 0;i < N;i++){
		cin >> Cadastro[i].nome;
		TotalHoras[i] = 0;
		for(int e=0;e<7;e++){
			cin >>Cadastro[i].horaC[e];
			cin >>Cadastro[i].horaS[e];
		}
	}
	for(int i =0;i < N;i++){
		for(int e=0;e<7;e++){
			TotalHoras[i] = TotalHoras[i]+(Cadastro[i].horaS[e]-Cadastro[i].horaC[e]);
		}
	}
	for(int i = 0;i<N;i++){
		if(TotalHoras[i] < 70){
			cout << Cadastro[i].nome << " "<< TotalHoras[i]<<endl;
		}
	}
	
	
return 0;
}
