#include <iostream>

int main(){
	float comprimento,largura,altura;
	
	std::cout << "Digite o valor do comprimento: ";
	std::cin >> comprimento;
	std::cout << "Digite o valor da largura: ";
	std::cin >> largura;
	std::cout << "Digite o valor da altura: ";
	std::cin >> altura;
	
	float volume = comprimento * largura * altura;
	
	std::cout << "O volume e: " << volume << std::endl;
}
