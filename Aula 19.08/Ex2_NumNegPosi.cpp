//Escreva uma fun��o que recebe um par�metro do tipo inteiro . A fun��o dever� retornar o caracter �P� se o par�metro for positivo ou �N� se o par�metro for igual a zero ou negativo.

#include <iostream>
using namespace std;

// Prototipa��o da fun��o

int num=0;

int main(){
	cout << "Digite um numero: ";
	cin >> num;
	if (num >0){
		cout << "Resultado: P";	
	 }else{
		cout << "Resultado: N";
	 }
	return 0;
}
