#include <iostream> 
int main(){
	double num1, num2;
	
	std::cout << "Digite o primeiro numero: ";
	std::cin >> num1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> num2;
	
	if (num1 > num2){
		std::cout << "O maior numero é: " << num1 << std::endl;
	} else if (num2 > num1){
		std::cout << "O maior numero é: " << num2 << std::endl;
	} else{
		std::cout << "Os numeros sao iguais." << std::endl;
	}
	
	return 0;
}
