#include <iostream>
using namespace std;

void trocar(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}
	
	
int main(){
	int num1=0,num2=0;
	cout << "Digite numero 1: ";
	cin>>num1;
	cout << "Digite numero 2: ";
	cin>>num2;
	
	trocar(num1,num2);
	cout <<"Troca A: "<<num1<<endl<<"Troca B: "<<num2;
}
