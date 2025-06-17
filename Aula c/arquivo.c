#include <stdio.h>
#include "bibliotecas/matematica.h"

int main(){
    int a,b;
    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", soma(a, b));
    printf("Subtração: %d\n", subtracao(a, b));
    printf("Multiplicação: %d\n", multiplicacao(a, b));
}