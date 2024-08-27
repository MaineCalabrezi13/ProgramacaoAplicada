#include <iostream>
using namespace std;


float calcular(int n1,int n2,char operar = '+'){
	float calc = 0;
	if (operar == '+'){
		calc = n1+n2;
	}
	if (operar == '-'){
		calc = n1-n2;
	}
	if (operar == '*'){
		calc = n1*n2;
	}
	if (operar == '/'){
		calc = n1/n2;
	}
		
	return calc;
}
int main(){
	int num1=0,num2=0;
	char caracter;
	cout << "Digite numero 1: ";
	cin>>num1;
	cout << "Digite numero 2: ";
	cin>>num2;
	cout << "Escolha caractere(+ - * /) :";
	cin>>caracter;
		
	int resul = calcular(num1,num2,caracter);
	
	cout<<num1<<caracter<<num2<<"="<<resul;
}
