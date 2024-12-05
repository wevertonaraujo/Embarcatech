//Operadores Relacionais
//Retornam 1 para verdadeiro e 0 para falso
#include <stdio.h>
int main(){
    int a = 100;
    int b = 20;
    printf("O resultado de a == b é: %d.\n", a == b);
    printf("O resultado de a == a é: %d.\n", a == a);
    printf("O resultado de a != b é: %d.\n", a != b);
    printf("O resultado de a != b*5 é: %d.\n", a != b*5);
    printf("O resultado de a > b é: %d.\n", a > b);    
    printf("O resultado de a < b é: %d.\n", a < b);
    printf("O resultado de a >= b é: %d.\n", a >= b);    
    printf("O resultado de a <= b é: %d.\n", a <= b);           
    printf("O resultado de a <= b*a é: %d.\n", a <= b*a);             
    printf("O resultado de a <= a-b é: %d.\n", a <= a-b);

    //Uma alternativa eh usar um operador terminário para retornar uma string
    printf("=-=-=-=-=Ternário=-=-=-=-=\n");
    //A avaliação de uma operação ternária se dá pelo analise da condição procedida por uma ? e depois do resultado para verdade e para falso separados por um : (Expressao?Verdadeira:falso)
    printf("O resultado de a == b é: %s.\n", (a == b?"Verdadeiro":"Falso"));
    printf("O resultado de a == a é: %s.\n", (a == a?"Verdadeiro":"Falso"));
    printf("O resultado de a != b é: %s.\n", (a != b?"Verdadeiro":"Falso"));
    printf("O resultado de a != b*5 é: %s.\n", (a != b*5?"Verdadeiro":"Falso"));
    printf("O resultado de a > b é: %s.\n", (a > b?"Verdadeiro":"Falso"));    
    printf("O resultado de a < b é: %s.\n", (a < b?"Verdadeiro":"Falso"));
    printf("O resultado de a >= b é: %s.\n", (a >= b?"Verdadeiro":"Falso"));    
    printf("O resultado de a <= b é: %s.\n", (a <= b?"Verdadeiro":"Falso"));           
    printf("O resultado de a <= b*a é: %s.\n", (a <= b*a?"Verdadeiro":"Falso"));             
    printf("O resultado de a <= a-b é: %s.\n", (a <= a-b?"Verdadeiro":"Falso"));

}