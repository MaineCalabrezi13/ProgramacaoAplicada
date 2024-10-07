#include <iostream>
using namespace std;
class Complexo{
	public:
		double real, imaginario;
		
		Complexo(double a, double b);
		void getComplexo();
		Complexo operator+(Complexo c);
};

Complexo Complexo::operator+(Complexo c){
	real=real+c.real;
	imaginario=imaginario+c.imaginario;
	
	return Complexo(real,imaginario);
}

Complexo::Complexo(double a, double b){
	real=a;
	imaginario=b;
}

void Complexo::getComplexo(){
	cout<<"("<<real<<"+"<<imaginario<<"i)"<<endl;
}


int main(){
	
	Complexo p1(2,3), p2(4,-1);
	Complexo p3=p1+p2;
	p3.getComplexo();
	
	return 0;
}
