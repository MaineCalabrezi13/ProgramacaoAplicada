#include <iostream>
#include <string>

class Resistor{
private:
	std::string cor1, cor2, cor3;
	std::string tipo;
	double potencia;

public:
	void AdicionarDados(std:: string c1, std::string c2, std::string c3, std::string t, double p){
		cor1= c1;
		cor2= c2;
		cor3= c3;
		tipo= t;
		potencia= p;
	}
	int CalcularValor(){
		int ValorBase= 0;
		
		if (cor1 == "preto") {
            ValorBase += 0;
        } else if (cor1 == "marrom") {
            ValorBase += 1;
        } else if (cor1 == "vermelho") {
            ValorBase += 2;
        } else if (cor1 == "laranja") {
            ValorBase += 3;
        } else if (cor1 == "amarelo") {
            ValorBase += 4;
        } else if (cor1 == "verde") {
            ValorBase += 5;
        } else if (cor1 == "azul") {
            ValorBase += 6;
        } else if (cor1 == "violeta") {
            ValorBase += 7;
        } else if (cor1 == "cinza") {
            ValorBase += 8;
        } else if (cor1 == "branco") {
            ValorBase += 9;
        }
		
		
		if (cor2 == "preto") {
            ValorBase = ValorBase * 10 + 0;
        } else if (cor2 == "marrom") {
            ValorBase = ValorBase * 10 + 1;
        } else if (cor2 == "vermelho") {
            ValorBase = ValorBase * 10 + 2;
        } else if (cor2 == "laranja") {
            ValorBase = ValorBase * 10 + 3;
        } else if (cor2 == "amarelo") {
            ValorBase = ValorBase * 10 + 4;
        } else if (cor2 == "verde") {
            ValorBase = ValorBase * 10 + 5;
        } else if (cor2 == "azul") {
            ValorBase = ValorBase * 10 + 6;
        } else if (cor2 == "violeta") {
            ValorBase = ValorBase * 10 + 7;
        } else if (cor2 == "cinza") {
            ValorBase = ValorBase * 10 + 8;
        } else if (cor2 == "branco") {
            ValorBase = ValorBase * 10 + 9;
        }
		
		int multiplicador = 1;
        if (cor3 == "preto") {
            multiplicador = 1; 
        } else if (cor3 == "marrom") {
            multiplicador = 10; 
        } else if (cor3 == "vermelho") {
            multiplicador = 100; 
        } else if (cor3 == "laranja") {
            multiplicador = 1000; 
        } else if (cor3 == "amarelo") {
            multiplicador = 10000; 
        } else if (cor3 == "verde") {
            multiplicador = 100000; 
        } else if (cor3 == "azul") {
            multiplicador = 1000000; 
        } else if (cor3 == "violeta") {
            multiplicador = 10000000; 
        } else if (cor3 == "cinza") {
            multiplicador = 100000000; 
        } else if (cor3 == "branco") {
            multiplicador = 1000000000; 
        } else if (cor3 == "dourada") {
            multiplicador = 0.1; 
        } else if (cor3 == "prateado") {
            multiplicador = 0.01; 
        }
		
		return ValorBase* multiplicador;
	}
		
		
	void ExibirInformacoes(){
		int ValorResistor = CalcularValor();
		std::cout << "Resistor: Amarelo, Laranja, Vermelho\n";
		std::cout << "Valor:" << ValorResistor <<"ohms\n";
		std::cout << "Tipo:" << tipo<< "\n";
		std::cout << "Pôtencia:" << potencia << "watts\n";
		}
	};
	
	int main(){
		Resistor r;
		r.AdicionarDados("amarelo", "laranja", "vermelho", "Fixo", 0.5);
		r.ExibirInformacoes();
		
		return 0;
	}


