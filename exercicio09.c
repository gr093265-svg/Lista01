/*
Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área
= (base * altura)/2.
*/

#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);

    area = (base * altura) / 2;

    printf("Area = %.2f\n", area);
    return 0;
}