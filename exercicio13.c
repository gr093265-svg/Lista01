/*
13. Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas
Faça um programa que que receba uma medida em pés, faça a conversões a
seguir e mostre os resultados.
a) Polegadas;
b) Jardas;
c) Milhas.
*/

#include <stdio.h>

int main() {
    float pes, polegadas, jardas, milhas;
    printf("Digite a medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    printf("Polegadas = %.2f\n", polegadas);
    printf("Jardas = %.2f\n", jardas);
    printf("Milhas = %.4f\n", milhas);
    return 0;
}