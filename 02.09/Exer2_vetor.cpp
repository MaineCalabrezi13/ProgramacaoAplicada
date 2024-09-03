#include <iostream>
int main(){
	int numeros[10];
	int maior,posicao;
	
	std::cout << "Digite 10 numeros inteiros: ";
	for(int i =0; i<10; ++i){
		std::cin>>numeros[i];
	}
	

	for(int i =0; i<10; ++i){
		std::cout<<" "<<numeros[i]<<std::endl;
	}
	
	maior = numeros[0];
	posicao = 0;
	for(int i =1; i<10; ++i){
		if(maior<numeros[i]){
			maior=numeros[i];
			posicao =i;
		}
	}
	std::cout<<"O maior numero e: "<<maior<<std::endl;
	std::cout<<"Sua posicao e: "<<posicao<<std::endl;
	return 0;
	
	
}
