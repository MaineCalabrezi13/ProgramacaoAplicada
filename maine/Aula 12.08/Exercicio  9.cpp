#include <iostream>
	
int main(){
	double num1,num2,num3,num4;
	std::cout << "Digite numero 1: ";
	std::cin >> num1;
	std::cout << "Digite numero 2: ";
	std::cin >> num2;
	std::cout << "Digite numero 3: ";
	std::cin >> num3;
	std::cout << "Digite numero 4: ";
	std::cin >> num4;
	
	double media = (num1+num2+num3+num4)/4;

	std::cout << "A media desses valores e: " << media << std::endl;
	
	return 0;
}
