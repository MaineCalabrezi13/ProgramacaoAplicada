#include <iostream>

int main(){
	int matriz[3][3];
	int soma[3] = {0, 0, 0};
	
	std::cout << "Digite os elementos de uma matrix 3x3: "<<std::endl;
	for(int i = 0; i<3; ++i){
		for(int j = 0; j<3;++j){
			std::cin >> matriz[i][j];
		}
	}
	for(int i = 0; i<3; ++i){
		for(int j = 0; j<3;++j){
			soma[i] += matriz[j][i];
			
		}
		std::cout <<soma[i]<< " ";
	}
	
	return 0;
}
