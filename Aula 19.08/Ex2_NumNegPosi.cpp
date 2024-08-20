//Escreva uma função que recebe um parâmetro do tipo inteiro . A função deverá retornar o caracter ‘P’ se o parâmetro for positivo ou ‘N’ se o parâmetro for igual a zero ou negativo.

#include <iostream>
using namespace std;

// Prototipação da função

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
