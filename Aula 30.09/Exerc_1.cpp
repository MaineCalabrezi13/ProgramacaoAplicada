#include <iostream>
using namespace std;
#include <cmath>

class EquacaoQuadratica{
	private:
		double Ca,Cb,Cc;
		
	public:
		EquacaoQuadratica(double a, double b, double c){
			Ca = a;
			Cb = b;
			Cc = c;
		}
		
		double calcularDelta(){
			double delta = (Cb*Cb)-(4*Ca*Cc);
			return delta;
		}
		
		void calcularRaizes(){
			double delta = calcularDelta();
			cout<<"Valor do Delta: "<<delta<<endl;
			cout<<"Equacao: Delta = "<<Ca<<"X^2 + "<<Cb<<"x + "<<Cc<<" = 0 "<<endl;
			
			if(delta>0){
				double x1 = (-Cb+sqrt(delta))/2*Ca;
				double x2 = (-Cb-sqrt(delta))/2*Ca;
				cout<<"exibir as duas raizes reais e diferentes: "<< x1<<" "<<x2<<endl;			
			}
			if(delta==0){
				double x = (-Cb+sqrt(delta))/2*Ca;
				cout<<"exibir as duas raizes reais e iguais: "<< x<<endl;
			}
			if(delta<0){
				cout<<"as raizes sao complexas(nao reais): "<<endl;
			}
		}
		
};

int main(){
	double Ca,Cb,Cc;
	
	cout << "Digite coeficiente A: "<<endl;
	cin>>Ca;
	cout << "Digite coeficiente B: "<<endl;
	cin>>Cb;
	cout << "Digite coeficiente C: "<<endl;
	cin>>Cc;
	
	EquacaoQuadratica equacao(Ca,Cb,Cc);
	
	double delta = equacao.calcularDelta();
	equacao.calcularRaizes();
	
	return 0;
}
