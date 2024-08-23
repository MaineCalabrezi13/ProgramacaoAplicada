#include <iostream>
using namespace std;

double saldo=500,limite=1000,valor=0,valorMax=0;



int main(){
	cout << "Saldo da conta: " << saldo << endl;
	cout << "Limite da conta: " << limite << endl;
	cout << "----------------------------------"<< endl;
	
	double valorMax = saldo+limite;
	cout << "Digite o valor a sacar: ";
	cin >> valor;
	double saldoDebi = saldo - valor;
	if (saldo >= valorMax){
		cout << "Transação recusada! Debito insuficiente: ";
	}else{	
		cout << "O saldo ficou: " << saldoDebi << endl;
	}
}
