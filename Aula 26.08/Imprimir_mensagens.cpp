#include <iostream> 
void imprimirMensagem(std::string mensagem = "Ol� Mundo", int repeticoes = 1){
    for (int i = 0; i<repeticoes; ++i){
        std::cout << mensagem << std::endl;
    }
}

int main(){
    
    imprimirMensagem();
    imprimirMensagem("Bem-vindo ao C++");
    imprimirMensagem("C++ � poderoso!",3);

}
