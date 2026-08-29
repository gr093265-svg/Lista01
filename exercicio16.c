/*
 Faça um programa que receba o número de horas trabalhadas e o valor
do salário mínimo. Calcule e mostre o salário a receber seguindo as regras
abaixo:
a) A hora trabalhada vale a metade do salário mínimo;
b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 3% do salário bruto.
d) O salário a receber equivale ao salário bruto menos o imposto
*/

#include <stdio.h>

int main() {
    float horas, salarioMinimo, valorHora, bruto, imposto, aReceber;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    valorHora = salarioMinimo / 2;
    bruto = horas * valorHora;
    imposto = bruto * 0.03;
    aReceber = bruto - imposto;

    printf("Salario bruto = %.2f\n", bruto);
    printf("Imposto = %.2f\n", imposto);
    printf("Salario a receber = %.2f\n", aReceber);
    return 0;
}