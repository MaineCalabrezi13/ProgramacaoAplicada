#include <iostream> 

class cidadesBrasil{
	public:
		std::string nome;
		std::string dataFundacao;
		int numHabitantes;
		int numEleitores;
		
		// M�todo (fun��o) para exibir informa��es do carro
		void exibirInfo(){
			std::cout<<"Nome: "<<nome<<", Data da Funda��o: "<<dataFundacao<<", Numero de habitantes: "<<numHabitantes<<", Numero de Eleitores: "<<numEleitores<<std::endl;
		}
};
int main(){
	cidadesBrasil cidades;
	cidades.nome = "Maine";
	cidades.dataFundacao = "13/03/2006";
	cidades.numHabitantes = 2000;
	cidades.numEleitores = 1900 ;
	//Chamar o m�todo 
	cidades.exibirInfo();
	return 0;
}
