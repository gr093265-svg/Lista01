/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica
com o percentual de lucro do distribuidor e dos impostos aplicados ao preço
de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos.
c) O preço final do veículo.
*/

#include <stdio.h>

int main() {
    float precoFabrica, percLucro, percImposto;
    float lucro, imposto, precoFinal;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &precoFabrica);
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percLucro);
    printf("Digite o percentual de impostos: ");
    scanf("%f", &percImposto);

    lucro = precoFabrica * (percLucro / 100);
    imposto = precoFabrica * (percImposto / 100);
    precoFinal = precoFabrica + lucro + imposto;

    printf("Lucro do distribuidor = %.2f\n", lucro);
    printf("Impostos = %.2f\n", imposto);
    printf("Preco final = %.2f\n", precoFinal);
    return 0;
}