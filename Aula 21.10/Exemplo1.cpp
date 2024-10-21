#include <iostream>
#include <string>
using namespace std;
//classe base

class Veiculo{
	public:
		string nome_,cor_;
		int velMax_,rodas_;
		
		Veiculo(string nome, string cor, int velMax, int rodas):
			nome_(nome), cor_(cor), velMax_(velMax), rodas_(rodas){
			}
		
		virtual void imprimir(){
			cout << "Nome......: " << nome_ << endl;
			cout << "Cor......: " << cor_ << endl;
			cout << "Velocidade maxima......: " << velMax_ << endl;
			cout << "Rodas......: " << rodas_ << endl;
		}
};
class Moto: public Veiculo{
	public:
		Moto(string nome, string cor, int velMax, int rodas):
			Veiculo(nome, cor, velMax, rodas){}
};

int main(){
	setlocale(LC_ALL, "portuguese");
	
	Moto moto("Moto", "Vermelha", 120, 2);
	
	moto.imprimir();
	
	return 0;
}
	

