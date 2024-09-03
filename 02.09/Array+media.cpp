#include <iostream>

int main(){
	int numeros[5];
	int soma=0;
	float media =0;
	
	std::cout << "Digite 5 numeros inteiros: " << std::endl;
	for (int i =0; i<5;++i){
	std::cin >> numeros[i];
	soma+=numeros[i];
	}
	
	media = soma/5.0;
	std::cout << "A media e igual a: "<< media;
	
	return 0;
	}
