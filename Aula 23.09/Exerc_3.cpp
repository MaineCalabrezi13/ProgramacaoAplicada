#include <iostream>

class DataHora {
private:
    int dia, mes, ano;
    int hora, minuto, segundo;

public:

    DataHora(int d, int m, int a, int h, int min, int s) {
        dia = d;
        mes = m;
        ano = a;
        hora = h;
        minuto = min;
        segundo = s;
    }

    DataHora(int d, int m, int a) {
        dia = d;
        mes = m;
        ano = a;
        hora = 0;
        minuto = 0;
        segundo = 0;
    }
    
    DataHora(int h, int min, int s, bool) { 
        dia = 1;
        mes = 1;
        ano = 1970;
        hora = h;
        minuto = min;
        segundo = s;
    }

    DataHora() {
        dia = 1;
        mes = 1;
        ano = 1970;
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    void exibirDataHora() {
        std::cout << (dia < 10 ? "0" : "") << dia << "/";
        std::cout << (mes < 10 ? "0" : "") << mes << "/";
        std::cout << ano << " - ";
        std::cout << (hora < 10 ? "0" : "") << hora << ":";
        std::cout << (minuto < 10 ? "0" : "") << minuto << ":";
        std::cout << (segundo < 10 ? "0" : "") << segundo << std::endl;
    }
};

int main() {

    DataHora dataHora1(12, 9, 2024, 15, 30, 45);
    std::cout << "DataHora1: ";
    dataHora1.exibirDataHora();

    DataHora dataHora2(12, 9, 2024);
    std::cout << "DataHora2: ";
    dataHora2.exibirDataHora();

    DataHora dataHora3(15, 30, 45, true);
    std::cout << "DataHora3: ";
    dataHora3.exibirDataHora();

    DataHora dataHora4;
    std::cout << "DataHora4: ";
    dataHora4.exibirDataHora();

    return 0;
}
