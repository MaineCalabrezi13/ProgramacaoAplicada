#include <iostream>

int main(){
	int numeros[5];
	int soma=0;
	
	std::cout << "Digite 5 números inteiros: " << std::endl;
	for (int i =0; i<5;++i){
	std::cin >> numeros[i];
	soma+=numeros[i];
	}
	std::cout << "A soma e: "<< soma;
	return 0;
	}
