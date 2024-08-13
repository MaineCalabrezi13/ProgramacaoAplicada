#include <iostream>

int main(){
	char letra;
	std::cout << "Digite uma letra: ";
	std::cin >> letra;
	
	if(letra =='A'|| letra =='E' ||letra =='I' || letra =='O' || letra =='U'|| letra =='a'|| letra =='e' ||letra =='i' || letra =='o' || letra =='u'){
		std::cout << "A letra digitada e uma vogal "<< std::endl;
	}else{
		std::cout << "A letra digitada e uma consoante "<< std::endl;
	}
	return 0;
}
