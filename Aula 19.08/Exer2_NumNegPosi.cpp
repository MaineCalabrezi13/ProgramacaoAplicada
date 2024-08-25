#include <iostream>
using namespace std;


int NumPosicao(int a);

int num = 0;
int main(){
	cout << "Digite um numero: ";
	cin >> num;
	NumPosicao(num);

}


int NumPosicao(int a){
	if (a >0){
		cout << "Resultado: P";	
	 }else{
		cout << "Resultado: N";
	 }
	return 0;
}




