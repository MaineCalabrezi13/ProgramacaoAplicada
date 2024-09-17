#include <iostream>
class Carro{
	private:
		std::string marca;
		std::string modelo;
		
	public:
		void exibirInfo(){
			std::cout<<"Marca: "<<marca<<", Modelo: "<<modelo<<std::endl;
		}
		
		void setMarca(std::string m){
			marca = m;
		}
		
		std::string getMarca(){
			return marca;
		}
};

int main(){
	Carro meuCarro;
	meuCarro.setMarca("Honda");
	meuCarro.exibirInfo();
	std::cout<<"Nova marca: "<<meuCarro.getMarca()<<std::endl;
	return 0;
	}
