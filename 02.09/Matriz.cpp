#include <iostream>
int main(){
	int matriz[6] = {1, 0 ,5,-2,-5,7};
	
	//Laço for para impressão da matriz
	std::cout <<"Letra a)"<<std::endl;
	for(int i = 0; i<6; ++i){
			std::cout << matriz[i] << " ";
		std::cout; // Nova linha após cada linha da matriz
	}
	std::cout <<std::endl<<"Letra b)"<<std::endl;
	soma = matriz[0] + matriz[1]+matriz[5];
	return 0;
						
}
