#include <iostream>
int main(){
	int vetor[6] = {1, 0 ,5,-2,-5,7};
	int soma=0;
	
	//Laço for para impressão da matriz
	std::cout<<"Letra a)"<<std::endl;
	for(int i = 0; i<6; ++i){
			std::cout << vetor[i] << " ";
		std::cout; // Nova linha após cada linha da matriz
	}
	std::cout <<std::endl<<std::endl<<"Letra b)"<<std::endl;
	soma = vetor[0] + vetor[1]+vetor[5];
	std::cout;
	std::cout << "Soma das vetor: "<<soma;
	
	std::cout <<std::endl<<std::endl<<"Letra c)"<<std::endl;
	vetor[4] = 100;
	for(int i = 0; i<6; ++i){
			std::cout << vetor[i] << " ";
		std::cout; 
	}
	
	std::cout <<std::endl<<std::endl<<"Letra d)"<<std::endl;
	for(int i = 0; i<6; ++i){
			std::cout << vetor[i] << " ";
		std::cout<<std::endl; 
	}
	return 0;
}
