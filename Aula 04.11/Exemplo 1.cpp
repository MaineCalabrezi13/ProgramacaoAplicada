#include <iostream>
using namespace std;

class Base{
	public:
		virtual void minhaFuncao(){
			cout << "Método pertencente a classe base (mae)" << endl;
		};
};

class Derivada: public Base{
	public:
		void minhaFuncao() override{
		cout <<"Método pertencente a classe derivada (filha)" << endl;
	};
	public:
		void minhaFuncao() override{
		cout <<"Método a classe derivada (filha)" << endl;
	};	
};

int main(){
	setlocale(LC_ALL,  "portuguese");
	
	Base base;
	Derivada derivada;
	
	base.minhaFuncao();
	derivada.minhaFuncao();
	
	return 0;
}
