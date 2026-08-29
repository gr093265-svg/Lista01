/*
Faça um programa que calcule e mostre a área de um círculo. Sabe-se que:
Area= : Area= PI r ao quadrado
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, area;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area = %.2f\n", area);
    return 0;
}