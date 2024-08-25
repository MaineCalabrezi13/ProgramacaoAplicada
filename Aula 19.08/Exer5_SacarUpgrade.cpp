#include <iostream>
using namespace std;

double sacar(int a,int b, int c);
bool validarSaque(int a, int b, int c);
double saldo = 500, limite = 1000, valor = 0;

int main() {
    cout << "Saldo da conta: " << saldo << endl;
    cout << "Limite da conta: " << limite << endl;
    cout << "----------------------------------" << endl;
    cout << "Digite o valor a sacar: ";
    cin >> valor;
	  double saldoFinal = sacar(valor,saldo,limite);
	  cout << "O seu saldo e de: " <<saldoFinal<<endl;
}
bool validarSaque(int a, int b, int c) {
    double valorMaximo = b + c;
    return a <= valorMaximo;
}

double sacar(int a, int b, int c) {
    if (validarSaque(a, b, c)) {
        b -= a;
        return b;
    } else {
        cout << "Não é possível realizar o saque. Verifique o valor e tente novamente." << endl;
        return b;
    }
}




