#include <iostream>
using namespace std;

class Shape{
	public:
		virtual double area() = 0;
};

class Circulo: public Shape{
	private:
		double raio;
	public:
		Circulo(double r) : raio(r){}
		double area() override{
		return 3.14*(raio*raio);
	};	
};

class Retangulo: public Shape{
	private:
		double base, altura;
	public:
		Retangulo(double b, double h) : base(b),altura(h){}
		double area() override{
		return base*altura;
	};	
};

class Triangulo: public Shape{
	private:
		double base, altura;
	public:
		Triangulo(double b, double h) : base(b),altura(h){}
		double area() override{
		return (base*altura)/2;
	};	
};

int main(){
	setlocale(LC_ALL,  "portuguese");		
	
	Circulo circulo(4);
	Retangulo retangulo(4,2);
	Triangulo triangulo(6,2);
	
	cout <<"Área do Circulo: " << circulo.area()<< endl;
	cout <<"Área do Retangulo: " << retangulo.area()<< endl;
	cout <<"Área do Triangulo: " << triangulo.area()<< endl;
	
	return 0;
;}

