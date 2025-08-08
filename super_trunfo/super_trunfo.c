#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turismo1, numero_pontos_turismo2;

    printf("Carta 01:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código:\n");
    scanf(" %s", &codigo_carta1);
    printf("Nome da cidade: ");
    getchar();
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    printf("População:\n");
    scanf(" %d", &populacao1);
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
    scanf(" %d", &populacao2);
    printf("Área (em km²):\n");
    scanf(" %f", &area2);
    printf("PIB:\n");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf(" %d", &numero_pontos_turismo2);

    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turismo1);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turismo2);

}