/*
Faça um programa que receba o ano de nascimento de uma pessoa e o
ano atual. Calcule e mostre:
a) A idade dessa pessoa.
b) Quantos anos essa pessoa terá em 2050.
*/

#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade, idadeEm2050;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idadeEm2050 = 2050 - anoNascimento;

    printf("Idade atual = %d\n", idade);
    printf("Idade em 2050 = %d\n", idadeEm2050);
    return 0;
}