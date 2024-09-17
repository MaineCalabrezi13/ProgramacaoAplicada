#include <iostream>

class Carro{
	private:
		std::string marca;
		std::string modelo;
		int ano;
		
	public:
		void exibirInfo();
		void setDados(std::string m1, std::string m2, int a);
		
};

int main(){
	Carro meuCarro;
	Carro meuCarroNovo;
	meuCarro.setDados("FIAT","147",1984);
	//Chamar método
	meuCarro.exibirInfo();
	meuCarroNovo.setDados("FERRARI","F250",2023);
	meuCarroNovo.exibirInfo();
	return 0;
}

void Carro::exibirInfo(){
	std::cout<<"Marca: "<<marca<<", Modelo: "<<modelo<<", Ano: "<<ano<<std::endl;
}

void Carro::setDados(std::string m1, std::string m2, int a){
	marca = m1;
	modelo = m2;
	ano = a;
}
