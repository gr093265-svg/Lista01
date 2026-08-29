/*
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>

int main() {
    float salario, novoSalario;
    printf("Digite o salario: ");
    scanf("%f", &salario);

    novoSalario = salario + (salario * 0.25);

    printf("Novo salario = %.2f\n", novoSalario);
    return 0;
}