#include <iostream>
using namespace std;

class Base{
	public:
		virtual void minhaFuncao(){
			cout << "M�todo pertencente a classe base (mae)" << endl;
		};
};

class Derivada: public Base{
	public:
		void minhaFuncao() override{
		cout <<"M�todo pertencente a classe derivada (filha)" << endl;
	};
	public:
		void minhaFuncao() override{
		cout <<"M�todo a classe derivada (filha)" << endl;
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
