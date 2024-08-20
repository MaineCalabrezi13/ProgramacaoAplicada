#include <iostream>
using namespace std;

int num1=0,num2=0,num3=0;

int main(){
	cout << "Digite numero 1: ";
	cin >> num1;
	
	cout << "Digite numero 2: ";
	cin >> num2;
	
	cout << "Digite numero 3: ";
	cin >> num3;
	
	bool resul= (num1,num2,num3);
	if((num1<num2)and(num2<num3)){
		cout << true;
	}else{
		cout << false;
	}
	return 0;
}

