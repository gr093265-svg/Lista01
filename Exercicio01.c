/*
1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma
desses números.
*/

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, soma;
    printf("Digite 4 numeros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    soma = n1 + n2 + n3 + n4;

    printf("Soma = %d\n", soma);
    return 0;
}