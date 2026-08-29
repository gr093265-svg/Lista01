/*
. Faça um programa que receba o salário de um funcionário e o percentual de
aumento, calcule e mostre o valor do aumento e o novo salário
*/

#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    novoSalario = salario + aumento;

    printf("Aumento = %.2f\n", aumento);
    printf("Novo salario = %.2f\n", novoSalario);
    return 0;
}