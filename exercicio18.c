/*
 Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para
os quais fornece a quantidade de ração em gramas. A quantidade diária de ração
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
quanto restará de ração no saco após cinco dias.
*/

#include <stdio.h>

int main() {
    float pesoSacoKg, racaoPorGatoGramas;
    float pesoSacoGramas, consumoDiario, consumoTotal, restante;

    printf("Digite o peso do saco de racao (kg): ");
    scanf("%f", &pesoSacoKg);
    printf("Digite a quantidade de racao por gato por dia (gramas): ");
    scanf("%f", &racaoPorGatoGramas);

    pesoSacoGramas = pesoSacoKg * 1000;
    consumoDiario = racaoPorGatoGramas * 2; // 2 gatos
    consumoTotal = consumoDiario * 5; // 5 dias
    restante = pesoSacoGramas - consumoTotal;

    printf("Racao restante apos 5 dias = %.2f gramas\n", restante);
    return 0;
}