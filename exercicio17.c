/*
Um trabalhador recebeu seu salário e depositou em sua contra corrente
bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo
atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38%
e o saldo inicial da conta está zerado
*/

#include <stdio.h>

int main() {
    float salario, cheque1, cheque2, saldo, cpmf1, cpmf2;

    printf("Digite o valor do salario depositado: ");
    scanf("%f", &salario);
    printf("Digite o valor do cheque 1: ");
    scanf("%f", &cheque1);
    printf("Digite o valor do cheque 2: ");
    scanf("%f", &cheque2);

    saldo = salario; // saldo inicial + deposito

    // cada saque (cheque) paga CPMF de 0.38% sobre o valor sacado
    cpmf1 = cheque1 * 0.0038;
    saldo = saldo - cheque1 - cpmf1;

    cpmf2 = cheque2 * 0.0038;
    saldo = saldo - cheque2 - cpmf2;

    printf("Saldo atual = %.2f\n", saldo);
    return 0;
}