#include <iostream>
using namespace std;

// Prototipa��o da fun��o

int soma(int a, int b);

//Fun��o principal
int main(){
	int n1 = 5, n2 = 10;
	int resultado = soma(n1,n2);
	cout << "A soma de: " << n1 << " e " << n2 << " e: " << resultado << endl;
	return 0;
}

//Defini��o da fun��o

int soma(int a, int b){
	return a+b;
}
