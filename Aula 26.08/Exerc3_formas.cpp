#include <iostream>
using namespace std;

float area(float raio){
	return (3.14 *(raio*raio));
}
int area(int altura, int base){
	return altura*base;
}

double area(double altura, double base){
	return (altura*base)/2;
}	
	
	
int main(){
	cout<<"Area Retangulo: "<<area(5,2) << endl;
	cout<<"Area traingulo: "<<area(10.0,2.0) << endl;
	cout<<"Area Ciruculo: "<<area(2) << endl;
}
