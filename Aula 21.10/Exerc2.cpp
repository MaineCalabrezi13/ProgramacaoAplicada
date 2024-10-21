#include <iostream>
using namespace std;

class Conta {
private:
    float saldo;

protected:
    float getSaldo(){
        return saldo;
    }

    void setSaldo(float s) {
        saldo = s;
    }

public:
    Conta(float s = 0) : saldo(s) {}

    virtual void sacar(float valor) {
        setSaldo(saldo - valor); 
    }

    void depositar(float valor) {
        setSaldo(saldo + valor);
    }

    virtual void exibirSaldo() const {
        cout << "Saldo: R$" << saldo << endl;
    }
};

class ContaCorrente : public Conta {
private:
    float taxaSaque;

public:
    ContaCorrente(float s, float taxa) : Conta(s), taxaSaque(taxa) {}

    void sacar(float valor)  {
        setSaldo(getSaldo() - (valor + taxaSaque)); 
    }

    void exibirSaldo()   {
        cout << "Saldo da Conta Corrente: R$" << getSaldo() << " (apos saque com taxa)" << endl;
    }
};

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(float s) : Conta(s) {}

    void sacar(float valor)  {
        setSaldo(getSaldo() - valor); 
    }

    void exibirSaldo()   {
        cout << "Saldo da Conta Poupança: R$" << getSaldo() << " (apos saque sem taxa)" << endl;
    }
};

int main() {
    ContaCorrente cc(1000, 5); 
    ContaPoupanca cp(1000);    

    cc.sacar(100);
    cp.sacar(50);

    cc.exibirSaldo();
    cp.exibirSaldo();

    return 0;
}
