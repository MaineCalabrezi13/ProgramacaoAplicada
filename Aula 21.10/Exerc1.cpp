#include <iostream>
#include <string>
using namespace std;

class Funcionario {
private:
    string nome_;
    float salarioBase_;

public:
    Funcionario(string nome, float salarioBase) : nome_(nome), salarioBase_(salarioBase) {}

    virtual float calcularSalarioFinal() const {
        return salarioBase_; 
    }

    string getNome()  {
        return nome_;
    }

    void exibirDados()  {
        cout << "Nome: " << nome_ << ", Salario Final: R$" << calcularSalarioFinal() << endl;
    }
};

class FuncionarioComissionado : public Funcionario {
private:
    float comissao;

public:
    FuncionarioComissionado(string nome, float salarioBase, float c) : Funcionario(nome, salarioBase), comissao(c) {}

    float calcularSalarioFinal()  {
        return Funcionario::calcularSalarioFinal() + comissao;
    }
};

class FuncionarioHorista : public Funcionario {
private:
    float horasTrabalhadas;
    float valorPorHora;

public:
    FuncionarioHorista(string nome, float salarioBase, float h, float v) : Funcionario(nome, salarioBase), horasTrabalhadas(h), valorPorHora(v) {}

    float calcularSalarioFinal()  {
        return Funcionario::calcularSalarioFinal() + (horasTrabalhadas * valorPorHora);
    }
};

int main() {
    FuncionarioComissionado joao("Joao", 3000, 500);
    FuncionarioHorista maria("Maria", 2000, 40, 50);

    joao.exibirDados();
    maria.exibirDados();

    return 0;
}
