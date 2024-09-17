#include <iostream> 

class Carro{
	public:
		std::string marca;
		std::string modelo;
		int ano;
		
		// Método (função) para exibir informações do carro
		void exibirInfo(){
			std::cout<<"Marca: "<<marca<<", Modelo: "<<modelo<<", Ano: "<<ano<<std::endl;
		}
};
int main(){
	Carro meuCarro;
	meuCarro.marca = "Toyota";
	meuCarro.modelo = "Corolla";
	meuCarro.ano = 2020;
	
	//Chamar o método 
	meuCarro.exibirInfo();
	return 0;
}
