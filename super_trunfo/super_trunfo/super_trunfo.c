#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turismo1, numero_pontos_turismo2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float inverso_densidade_populacional1, inverso_densidade_populacional2;
    float super_poder1, super_poder2;
    char carta1, carta2;

    printf("Carta 01:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código:\n");
    scanf(" %s", &codigo_carta1);
    printf("Nome da cidade: ");
    getchar();
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    printf("População:\n");
    scanf(" %lu", &populacao1);
    printf("Área (em km²):\n");
    scanf(" %f", &area1);
    printf("PIB:\n");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &numero_pontos_turismo1);

    printf("Carta 02:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código:\n");
    scanf(" %s", &codigo_carta2);
    printf("Nome da cidade: ");
    getchar();
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    printf("População:\n");
    scanf(" %lu", &populacao2);
    printf("Área (em km²):\n");
    scanf(" %f", &area2);
    printf("PIB:\n");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &numero_pontos_turismo2);

    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;
    inverso_densidade_populacional1 = 1 / densidade_populacional1;
    inverso_densidade_populacional2 = 1 / densidade_populacional2;
    super_poder1 = populacao1 + area1 + pib1 + numero_pontos_turismo1 + pib_per_capita1 + inverso_densidade_populacional1;
    super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turismo2 + pib_per_capita2 + inverso_densidade_populacional2;

    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    carta1 = '1';
    carta2 = '2';
    char cartas[] = {carta2, carta1};

    int populacao_vencedor = populacao1 > populacao2;
    int area_vencedor = area1 > area2;
    int pib_vencedor = pib1 > pib2;
    int pontos_turismo_vencedor = numero_pontos_turismo1 > numero_pontos_turismo2;
    int densidade_populacional_vencedor = densidade_populacional1 < densidade_populacional2;
    int pib_per_capita_vencedor = pib_per_capita1 > pib_per_capita2;
    int super_poder_vencedor = super_poder1 > super_poder2;

    printf("\nComparação de cartas:\n");
    printf("População: Carta %c venceu (%d)\n", cartas[populacao_vencedor], populacao_vencedor);
    printf("Área: Carta %c venceu (%d)\n", cartas[area_vencedor], area_vencedor);
    printf("PIB: Carta %c venceu (%d)\n", cartas[pib_vencedor], pib_vencedor);
    printf("Pontos Turísticos: Carta %c venceu (%d)\n", cartas[pontos_turismo_vencedor], pontos_turismo_vencedor);
    printf("Densidade Populacional: Carta %c venceu (%d)\n", cartas[densidade_populacional_vencedor], densidade_populacional_vencedor);
    printf("PIB per Capita: Carta %c venceu (%d)\n", cartas[pib_per_capita_vencedor], pib_per_capita_vencedor);
    printf("Super Poder: Carta %c venceu (%d)\n", cartas[super_poder_vencedor], super_poder_vencedor);

}