#include <iostream>

int main(){
	int matriz[3][3], transposta[3][3];
	
	std::cout << "Digite os elementos de uma matrix 3x3: "<<std::endl;
	for(int i = 0; i<3; ++i){
		for(int j = 0; j<3;++j){
			std::cin >> matriz[i][j];
		}
	}
	for(int i = 0; i<3; ++i){
		for(int j = 0; j<3;++j){
			transposta[j][i] >> matriz[i][j];
		}
	}
	std::cout << "Matriz transposta: "<<std::endl;
	for(int i=0;i<3;++i){
		for(int j = 0; j<3; ++j){
			std::cout << transposta[i][j]<< " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
