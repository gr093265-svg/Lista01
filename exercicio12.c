/*
. Faça um programa que receba dois números maiores que zero, calcule e
mostre um elevado ao outro.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;
    printf("Digite dois numeros maiores que zero: ");
    scanf("%f %f", &base, &expoente);

    resultado = pow(base, expoente);

    printf("Resultado = %.2f\n", resultado);
    return 0;
}