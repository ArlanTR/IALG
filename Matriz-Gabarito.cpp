#include <iostream>
using namespace std;
int main(){
	char gabarito [8][11];
	float media=0,mediaGeral =0;
	int acertos =0;
	for(int i=0;i <11;i++){
		for(int e=0;e <8;e++){
			cin>> gabarito[e][i];
		}
	}
	for(int i=1;i <11;i++){
		media = 0;
		acertos =0;
		for(int e=0;e <8;e++){
			if(gabarito[e][0] == gabarito[e][i]){
				acertos = acertos +1;
			}
		}
		media = (acertos*100)/float(8);
		if(media >= 60){
			mediaGeral = mediaGeral+1;
		}
		cout << media<<endl;
	}
	cout << endl;
	cout << mediaGeral*float(10)<<endl;

return 0;
}
