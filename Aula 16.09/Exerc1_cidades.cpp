#include <iostream> 

class cidadesBrasil{
	public:
		std::string nome;
		std::string dataFundacao;
		int numHabitantes;
		int numEleitores;
		
		// Método (função) para exibir informações do carro
		void exibirInfo(){
			std::cout<<"Nome: "<<nome<<", Data da Fundação: "<<dataFundacao<<", Numero de habitantes: "<<numHabitantes<<", Numero de Eleitores: "<<numEleitores<<std::endl;
		}
};
int main(){
	cidadesBrasil cidades;
	cidades.nome = "Maine";
	cidades.dataFundacao = "13/03/2006";
	cidades.numHabitantes = 2000;
	cidades.numEleitores = 1900 ;
	//Chamar o método 
	cidades.exibirInfo();
	return 0;
}
