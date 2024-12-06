//Funções e Escopo de variáveis
#include <stdio.h>

int multiplicar (int multiplicado, int multiplicador){
    int produto = 0;
    for (int contador = 0; contador < multiplicador; contador++){
        produto += multiplicado;
    }
    return produto;
}

int main(){
    printf("O resultado de 1x3 é: %d\n",multiplicar(3,3));
    return 0;
}
    