//Operadores de incremento e decremento
#include <stdio.h>
int main(){
    int var = 0; // Inicializado com 0
    printf("Valor de var = %d\n", var); 
    printf("Valor de var com ++var = %d\n", ++var); // incrementa e acessa a variavel
    printf("Valor de var = %d\n", var); // Valor como foi impresso na anterior
    printf("Valor de var++ = %d\n", var++); // Ele acessa a variavel e imprime o valor DEPOIS que ele incrementa
    printf("Valor de var = %d\n", var); // Valor incrementado - 2
    printf("Decrementando com --\n");
    printf("Valor de var com --var = %d\n", --var); // decrementa e acessa a variavel
    printf("Valor de var = %d\n", var); // Valor como foi impresso na anterior
    printf("Valor de var-- = %d\n", var--); // Ele acessa a variavel e imprime o valor DEPOIS que ele decrementa
    printf("Valor de var = %d\n", var); // Valor Final decrementado - 2
    return 0;
}