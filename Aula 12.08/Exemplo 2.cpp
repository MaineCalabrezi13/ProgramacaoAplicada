#include <iostream>

int main(){
	int dia;
	std::cout << "Digite um numero (0-6)para descobrir o dia da semana:  ";
	std::cin >> dia;
	
	switch(dia){
		case 0:
			std::cout << "Domingo" << std::endl;
			break;
		case 1:
		std::cout << "Segunda-Feira" << std::endl;
			break;	
		case 2:
			std::cout << "Terça-Feira" << std::endl;
			break;
		case 3:
			std::cout << "Quarta-Feira" << std::endl;
			break;
		case 4:
			std::cout << "Quinta-Feira" << std::endl;
			break;
		case 5:
			std::cout << "Sexta-Feira" << std::endl;
			break;
		case 6:
			std::cout << "Sabado" << std::endl;
			break;
		default:
			std::cout << "Numero invalido! Por favor, insira um numero entre 0 e 6" << std::endl;
			break;
	}
	return 0;
}


