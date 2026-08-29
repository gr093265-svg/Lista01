/*
 Faça um programa que receba três notas e seus respectivos pesos, calcule e
mostre a média ponderada dessas notas
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3, media;
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite os 3 pesos: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    // média ponderada = soma(nota*peso) / soma(pesos)
    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);

    printf("Media ponderada = %.2f\n", media);
    return 0;
}