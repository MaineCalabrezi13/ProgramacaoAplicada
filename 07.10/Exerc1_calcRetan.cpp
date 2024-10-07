#include <iostream>
using namespace std;

class Retangulo{
	private:
		double largura;
		double altura;
	
	public:
		Retangulo(double l, double a): largura(l), altura(a){}
	
	friend double calcularArea(Retangulo r);
	friend double calcularPerimetro(Retangulo r);
};

double calcularArea(Retangulo r){
	return r.largura * r.altura;
}

double calcularPerimetro(Retangulo r){
	return 2 * (r.largura + r.altura);
}

int main(){
	Retangulo retangulo(5.0,4.0);
	
	cout <<"Area do Retangulo: "<<calcularArea(retangulo)<<endl;
	cout <<"Perimetro do Retangulo: "<<calcularPerimetro(retangulo)<<endl;
	
	
	return 0;
}
