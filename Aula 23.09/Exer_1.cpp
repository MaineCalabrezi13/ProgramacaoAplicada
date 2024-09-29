#include <iostream>
using namespace std;

class ContaCorrente {
    private:
        double saldo = 0;
        double limite = 500;  
        string senha = "maine18";

        bool validarSaque(double valor) {
            return (valor <= (saldo + limite));
        }
        
    public:
        string titular;
        
        void depositar(double valor) {
            saldo += valor;
            cout << "\nDepósito de R$" << valor << " realizado com sucesso!";
        }
        
        void sacar(double valor, string s) {
            if (senha == s) {
                if (validarSaque(valor)) {
                    saldo -= valor;
                    cout << "\nR$" << valor << " sacado com sucesso!";
                } else {
                    cout << "\nValor acima do saldo disponível (Saldo + Limite)!";
                }
            } else {
                cout << "\nSenha Incorreta!";
            }
        }
        
        void transferir(ContaCorrente &contaDestino, double valor, string s) {
            if (senha == s) {
                if (validarSaque(valor)) {
                    saldo -= valor;
                    contaDestino.depositar(valor);  
                    cout << "\nTransferência de R$" << valor << " realizada com sucesso!";
                } else {
                    cout << "\nValor acima do saldo disponível (Saldo + Limite)!";
                }
            } else {
                cout << "\nSenha Incorreta!";
            }
        }
        
        void exibirSaldo(string s) {
            if (senha == s) {
                cout << "\nSaldo: R$" << saldo;
            } else {
                cout << "\nSenha Incorreta!";
            }
        }
};

int main() {

    ContaCorrente conta1, conta2;
    
   
    conta1.depositar(2000);
    conta2.depositar(1500);
    
    conta1.sacar(300, "maine18");
    conta1.exibirSaldo("maine18");
    
    conta1.sacar(100, "senhaErrada");
    conta1.exibirSaldo("maine18");
    
    conta1.transferir(conta2, 500, "maine18");
    conta1.exibirSaldo("maine18");
    conta2.exibirSaldo("maine18");
    
    conta1.sacar(3000, "maine18");
    conta1.exibirSaldo("maine18");
    
    return 0;
}
