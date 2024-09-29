#include <iostream>

class Pessoa{
private:
    std::string nome;
    int idade;
    std::string email;
    std:: string telefone;
    
public:
    Pessoa(std::string n, int i, std::string e, std::string t):nome(n), idade(i), email(e), telefone(t){}
    
    Pessoa(std::string n, int i, std::string e): nome(n), idade(i), email(e){}
    
    Pessoa() : nome("Desconhecido"), idade(0), email("Não informado"), telefone("Não informado"){}
    
    void mostrarInfo() const{
        std::cout << "Nome: "<< nome <<std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Telefone: " << telefone << std::endl;
    }
};
int main(){

    Pessoa pessoa1("Maine Calabrezi", 18, "maine13@gmail.com", "1234-5678");
    Pessoa pessoa2("Mimi", 2, "batatinha@gmail.com");
    Pessoa pessoa3;

    pessoa1.mostrarInfo();
    pessoa2.mostrarInfo();
    pessoa3.mostrarInfo();
