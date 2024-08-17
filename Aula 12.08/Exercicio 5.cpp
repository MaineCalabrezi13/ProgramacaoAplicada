#include <iostream>

int main(){
	double nota1, nota2;
	
	std::cout << "Digite sua primeira nota: ";
	std::cin >> nota1;
	std::cout << "Digite sua segunda nota: ";
	std::cin >> nota2;

	double media = (nota1+nota2)/2;
	if (media>=7 || media<10){
		std::cout << "Aprovado" << std::endl;
	}else if (media<7){
		std::cout << "Reprovado" << std::endl;
	}else if (media==10){
		std::cout << "Aprovado com Distinção" << std::endl;
	}
	return 0;
	
		
		
}
