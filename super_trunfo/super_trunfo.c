#include <stdio.h>

int main() {
    char nome_pais1[50], nome_pais2[50];
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float inverso_densidade_populacional1, inverso_densidade_populacional2;
    float super_poder1, super_poder2;
    char carta1, carta2;
    int opcao1, opcao2;
    float soma_atrib1, soma_atrib2;

    printf("Carta 01:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome_pais1);
    printf("Estado: \n");
    scanf(" %c", &estado1);
    printf("Código: \n");
    scanf(" %s", &codigo_carta1);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: \n");
    scanf(" %lu", &populacao1);
    printf("Área (em km²): \n");
    scanf(" %f", &area1);
    printf("PIB: \n");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &numero_pontos_turisticos1);

    printf("\nCarta 02:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nome_pais2);
    printf("Estado: \n");
    scanf(" %c", &estado2);
    printf("Código: \n");
    scanf(" %s", &codigo_carta2);
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: \n");
    scanf(" %lu", &populacao2);
    printf("Área (em km²): \n");
    scanf(" %f", &area2);
    printf("PIB: \n");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &numero_pontos_turisticos2);

    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;
    inverso_densidade_populacional1 = 1 / densidade_populacional1;
    inverso_densidade_populacional2 = 1 / densidade_populacional2;
    super_poder1 = populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + inverso_densidade_populacional1;
    super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + inverso_densidade_populacional2;

    printf("\nCarta 01:\n");
    printf("Nome do país: %s\n", nome_pais1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 02:\n");
    printf("Nome do país: %s\n", nome_pais2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    printf("\n*** Comparação de cartas ***\n");
    printf("1. População: \n");
    printf("2. Área: \n");
    printf("3. PIB: \n");
    printf("4. Número de Pontos Turísticos: \n");
    printf("5. Densidade Populacional: \n");
    printf("6. Super Poder: \n");


    printf("Escolha o primeiro atributo para comparação: \n");
    scanf(" %d", &opcao1);
    printf("Escolha o segundo atributo para comparação: \n");
    scanf(" %d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Atributo já selecionado! Os atributos devem ser diferentes.\n");
        return 0;
    }

    soma_atrib1 = 0;
    soma_atrib2 = 0;

    switch (opcao1) {
        case 1:
            soma_atrib1 += populacao1;
            soma_atrib2 += populacao2;
            break;
        case 2:
            soma_atrib1 += area1;
            soma_atrib2 += area2;
            break;
        case 3:
            soma_atrib1 += pib1;
            soma_atrib2 += pib2;
            break;
        case 4:
            soma_atrib1 += numero_pontos_turisticos1;
            soma_atrib2 += numero_pontos_turisticos2;
            break;
        case 5:
            soma_atrib1 += densidade_populacional1;
            soma_atrib2 += densidade_populacional2;
            break;
        case 6:
            soma_atrib1 += super_poder1;
            soma_atrib2 += super_poder2;
            break;
    }

    switch (opcao2) {
        case 1:
            soma_atrib1 += populacao1;
            soma_atrib2 += populacao2;
            break;
        case 2:
            soma_atrib1 += area1;
            soma_atrib2 += area2;
            break;
        case 3:
            soma_atrib1 += pib1;
            soma_atrib2 += pib2;
            break;
        case 4:
            soma_atrib1 += numero_pontos_turisticos1;
            soma_atrib2 += numero_pontos_turisticos2;
            break;
        case 5:
            soma_atrib1 += densidade_populacional1;
            soma_atrib2 += densidade_populacional2;
            break;
        case 6:
            soma_atrib1 += super_poder1;
            soma_atrib2 += super_poder2;
            break;
    }

    switch (opcao1)
    {
    case 1:
        printf("\n*** Resultado da comparação POPULAÇÃO: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: População\n");
        printf("Carta 1: %lu\n", populacao1);
        printf("Carta 2: %lu\n", populacao2);

        printf("%s\n", populacao1 > populacao2 ? "Vencedor: Carta 1" :
            populacao2 > populacao1 ? "Vencedor: Carta 2" : "Empate!");


        break;
    case 2:
        printf("\n*** Resultado da comparação ÁREA: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Área\n");
        printf("Carta 1: %.2f km²\n", area1);
        printf("Carta 2: %.2f km²\n", area2);

        printf("%s\n", area1 > area2 ? "Vencedor: Carta 1" :
            area2 > area1 ? "Vencedor: Carta 2" : "Empate!");


    break;
    case 3:
        printf("\n*** Resultado da comparação PIB: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);

        printf("%s\n", pib1 > pib2 ? "Vencedor: Carta 1" :
            pib2 > pib1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 4:
        printf("\n*** Resultado da comparação N° DE PONTOS TURÍSTICOS: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Número de Pontos Turísticos\n");
        printf("Carta 1: %d\n", numero_pontos_turisticos1);
        printf("Carta 2: %d\n", numero_pontos_turisticos2);

        printf("%s\n", numero_pontos_turisticos1 > numero_pontos_turisticos2 ? "Vencedor: Carta 1" :
            numero_pontos_turisticos2 > numero_pontos_turisticos1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 5:
        printf("\n*** Resultado da comparação DENSIDADE POPULACIONAL: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1: %.2f hab/km²\n", densidade_populacional1);
        printf("Carta 2: %.2f hab/km²\n", densidade_populacional2);
        
        printf("%s\n", densidade_populacional1 < densidade_populacional2 ? "Vencedor: Carta 1" :
            densidade_populacional2 < densidade_populacional1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 6:
        printf("\n*** Resultado da comparação SUPER PODER: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Super Poder\n");
        printf("Carta 1: %.2f\n", super_poder1);
        printf("Carta 2: %.2f\n", super_poder2);

        printf("%s\n", super_poder1 > super_poder2 ? "Vencedor: Carta 1" :
            super_poder2 > super_poder1 ? "Vencedor: Carta 2" : "Empate!");

        break;

    default:
        printf("\nOpção inválida! Tente novamente com um número de 1 a 6.\n");
        break;
    }

    switch (opcao2)
    {
    case 1:
        printf("\n*** Resultado da comparação POPULAÇÃO: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: População\n");
        printf("Carta 1: %lu\n", populacao1);
        printf("Carta 2: %lu\n", populacao2);

        printf("%s\n", populacao1 > populacao2 ? "Vencedor: Carta 1" :
            populacao2 > populacao1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 2:
        printf("\n*** Resultado da comparação ÁREA: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Área\n");
        printf("Carta 1: %.2f km²\n", area1);
        printf("Carta 2: %.2f km²\n", area2);
        
        printf("%s\n", area1 > area2 ? "Vencedor: Carta 1" :
            area2 > area1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 3:
        printf("\n*** Resultado da comparação PIB: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);

        printf("%s\n", pib1 > pib2 ? "Vencedor: Carta 1" :
            pib2 > pib1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 4:
        printf("\n*** Resultado da comparação N° DE PONTOS TURÍSTICOS: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Número de Pontos Turísticos\n");
        printf("Carta 1: %d\n", numero_pontos_turisticos1);
        printf("Carta 2: %d\n", numero_pontos_turisticos2);

        printf("%s\n", numero_pontos_turisticos1 > numero_pontos_turisticos2 ? "Vencedor: Carta 1" :
            numero_pontos_turisticos1 > numero_pontos_turisticos2 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 5:
        printf("\n*** Resultado da comparação DENSIDADE POPULACIONAL: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1: %.2f hab/km²\n", densidade_populacional1);
        printf("Carta 2: %.2f hab/km²\n", densidade_populacional2);
        
        printf("%s\n", densidade_populacional1 < densidade_populacional2 ? "Vencedor: Carta 1" :
            densidade_populacional2 < densidade_populacional1 ? "Vencedor: Carta 2" : "Empate!");

        break;
    case 6:
        printf("\n*** Resultado da comparação SUPER PODER: ***\n");
        printf("País 1: %s\n", nome_pais1);
        printf("País 2: %s\n", nome_pais2);
        printf("Atributo: Super Poder\n");
        printf("Carta 1: %.2f\n", super_poder1);
        printf("Carta 2: %.2f\n", super_poder2);

        printf("%s\n", super_poder1 > super_poder2 ? "Vencedor: Carta 1" :
            super_poder2 > super_poder1 ? "Vencedor: Carta 2" : "Empate!");

        break;

    default:
        printf("\nOpção inválida! Tente novamente com um número de 1 a 6.\n");
        break;
    }

    printf("\n*** Resultado da comparação SOMA DOS ATRÍBUTOS: ***\n");

    printf("Soma dos atributos da Carta 1: %.2f\n", soma_atrib1);
    printf("Soma dos atributos da Carta 2: %.2f\n", soma_atrib2);

    if (soma_atrib1 > soma_atrib2) {
        printf("Vencedor: Carta 1\n");
    } else if (soma_atrib2 > soma_atrib1) {
        printf("Vencedor: Carta 2\n");
    } else {
        printf("Vencedor: Empate!\n");
    }

    return 0;

}