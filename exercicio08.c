/*
Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
calcule e mostre o valor do rendimento e o valor total depois do rendimento
*/

#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, total;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros (%%): ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa / 100);
    total = deposito + rendimento;

    printf("Rendimento = %.2f\n", rendimento);
    printf("Total = %.2f\n", total);
    return 0;
}