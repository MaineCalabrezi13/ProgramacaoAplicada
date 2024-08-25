#include <iostream>
using namespace std;


int soma(int a, int b, int c);

int main(){
	int n1 = 5, n2 = 10, n3 = 20;
	int resultado = soma(n1,n2,n3);
	cout << "A soma de: " << n1 << " e " << n2 << " e " << n3 << " e: " << resultado << endl;
	return 0;
}


int soma(int a, int b, int c){
	return a+b+c;
}
