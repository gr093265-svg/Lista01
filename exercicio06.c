/*
Faça um programa que receba o salário-base de um funcionário, calcule e mostre o
salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o
salário-base e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>

int main() {
    float base, gratificacao, imposto, salarioReceber;
    printf("Digite o salario-base: ");
    scanf("%f", &base);

    gratificacao = base * 0.05;
    imposto = base * 0.07;
    salarioReceber = base + gratificacao - imposto;

    printf("Salario a receber = %.2f\n", salarioReceber);
    return 0;
}