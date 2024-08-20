#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n1,n2;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	double raiz1 = sqrt(n1);
	double raiz2 = sqrt(n2);
	
	double potencia = pow(n1,n2);
	
	cout << "A raiz quadrada é: " << n1 << " e" << raiz1 <<endl;
	cout << "A raiz quadrada é: " << n2 << " e" << raiz2 <<endl; 
	cout << n1 <<" elevado a " << n2 << " e" << potencia <<endl;
	
	return 0;
}
