#include <iostream> 
using namespace std;
class ContaBancaria{
	private:
		double saldo = 0;
		string senha = "maine18";
		
	public:
		string titular;
		
		void depositar(double valor){
			saldo = saldo + valor;
		}
		
		void sacar(double valor, string s){
			if (senha == s){
				if (valor <= saldo){
					saldo = saldo - valor;
					cout << "\nR$" << valor << " sacado com sucesso!";
				} else {
					cout << "\nValor acima do saldo!";
				}
			} else {
				cout << "\nSenha Incorreta!";
			}	
		}
		
		void exibirSaldo(string s){
			if (senha == s){
				cout << "\nSaldo: R$" << saldo;
			}else{
				cout << "\nSenha incorreta";
			};
		};
		
		
		void setDados(int valor){
			valor = valor;
		}
		
};
int main(){
	ContaBancaria conta;
	conta.depositar(2000);
	conta.sacar(300,"maine18");
	conta.exibirSaldo("maine18");
	conta.sacar(100,"errada");
	conta.exibirSaldo("errada2");
	return 0;

}
