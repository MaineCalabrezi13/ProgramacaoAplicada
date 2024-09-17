#include <iostream> 
using namespace std;
class Retangulo{
	private:
		int largura;
		int altura;
		
	public:
		int areaRetangulo(){
			return largura * altura;
		}
		
		int perimetroRetangulo(){
			return (largura*2) + (altura*2);
		}
		
		void setDados(int lar, int altu){
			largura = lar;
			altura = altu;
		}
		void exibirInfo(){
			double area = areaRetangulo();
			double perimetro = perimetroRetangulo();
			cout << "Area do Retangulo: " << area << ", Perimetro: " << perimetro << endl;
		}
};
int main(){
	Retangulo retangulo;
	retangulo.setDados(20,30);
	//Chamar método
	retangulo.exibirInfo();
	return 0;

}
