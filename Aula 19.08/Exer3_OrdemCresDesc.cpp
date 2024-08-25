#include <iostream>
using namespace std;


bool OrdemCresDecres(int a,int b, int c);

int num1=0, num2=0, num3=0;
int main(){
	cout << "Digite numero 1: " <<endl;
	cin >> num1;
	
	cout << "Digite numero 2: "<<endl;
	cin >> num2;
	
	cout << "Digite numero 3: "<<endl;
	cin >> num3;
	OrdemCresDecres(num1,num2,num3);

}


bool OrdemCresDecres(int a,int b, int c){
	if((a<b)and(b<c)){
		cout << true;
	}else{
		cout << false;
	}
}




