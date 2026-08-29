/*
Faça um programa que receba o salário-base de um funcionário, calcule e
mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
50,00 e paga imposto de 10% sobre o salário-base.
*/

#include <stdio.h>

int main() {
    float base, imposto, salarioReceber;
    printf("Digite o salario-base: ");
    scanf("%f", &base);

    imposto = base * 0.10;
    salarioReceber = base + 50.0 - imposto;

    printf("Salario a receber = %.2f\n", salarioReceber);
    return 0;
}