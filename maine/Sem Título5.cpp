#include <iostream>

using namespace std;

int main(){
	
	std::cout << "Digite a temperatura em graus celsius: ";
	std::cin >> temp;
	
	F = temp*9/5+32;
	std::cout << "Convertendo para Fahrenheit: "<<F << endl;
	return 0;
}
