#include <iostream> 

class Carro{
	public:
		std::string marca;
		std::string modelo;
		int ano;
		
		// M�todo (fun��o) para exibir informa��es do carro
		void exibirInfo(){
			std::cout<<"Marca: "<<marca<<", Modelo: "<<modelo<<", Ano: "<<ano<<std::endl;
		}
};
int main(){
	Carro meuCarro;
	meuCarro.marca = "Toyota";
	meuCarro.modelo = "Corolla";
	meuCarro.ano = 2020;
	
	//Chamar o m�todo 
	meuCarro.exibirInfo();
	return 0;
}
