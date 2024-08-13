#include <iostream>

using namespace std;

int main(){
	
	int num1=0;
	int num2=0;
	
	std::cout << "Digite um numero inteiro: ";
	std::cin >> num1;
	std::cout << "Digite outro numero inteiro: ";
	std::cin >> num2;
	
	int soma = num1+num2;
	int subtracao = num1-num2;
	int multiplicacao = num1*num2;
	float divisao = num1/num2;
	
	std::cout << "Soma: " << soma << std::endl;
	std::cout << "Subtracao: " << subtracao << std::endl;
	std::cout << "Multiplicacao: " << multiplicacao << std::endl;
	std::cout << "Divisao: " << divisao << std::endl;
}
