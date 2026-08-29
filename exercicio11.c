/*
11. Faça um programa que receba um número positivo e maior que zero,
calcule e mostre:
a) O número digitado ao quadrado.
b) O número digitado ao cubo.
c) A raiz quadrada do número digitado.
d) A raiz cúbica do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    printf("Digite um numero maior que zero: ");
    scanf("%f", &numero);

    printf("Quadrado = %.2f\n", pow(numero, 2));
    printf("Cubo = %.2f\n", pow(numero, 3));
    printf("Raiz quadrada = %.2f\n", sqrt(numero));
    printf("Raiz cubica = %.2f\n", cbrt(numero));
    return 0;
}