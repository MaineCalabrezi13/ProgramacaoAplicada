#include <iostream>
using namespace std;

class Caixa{
	private:
		double largura;
		double altura;
		double profundidade;
		
	public:
		Caixa(double l, double a, double p): largura(l), altura(a), profundidade(p){}
		
		//Função amiga que pode acessar membros privados da classe
		
		friend double calcularVolume(Caixa c);
};

//Definição da fução amiga

double calcularVolume(Caixa c){
	return c.largura * c.altura * c.profundidade;
}

int main(){
	Caixa caixa(5.0,4.0,3.0);
	
	//Chama a função amiga para calcular o volume da caixa
	cout <<"Volume da caixa: "<<calcularVolume(caixa)<<endl;
	
	return 0;
}
