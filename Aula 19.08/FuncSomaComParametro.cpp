#include <iostream>
using namespace std;

// Prototipação da função

int soma(int a, int b);

//Função principal
int main(){
	int n1 = 5, n2 = 10;
	int resultado = soma(n1,n2);
	cout << "A soma de: " << n1 << " e " << n2 << " e: " << resultado << endl;
	return 0;
}

//Definição da função

int soma(int a, int b){
	return a+b;
}
