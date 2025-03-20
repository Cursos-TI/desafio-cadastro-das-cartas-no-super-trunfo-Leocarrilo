#include <stdio.h>

int main() {
    
    //Declaração de variáveis
    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float pib1Bilhoes, pib2Bilhoes;
    float populacaoMil1, populacaoMil2;
    float superPoder1, superPoder2;

    //Entrada de dados da carta 1
    printf ("Insira o estado da primeira carta: \n");
    scanf ("%s", &estado1);

    printf ("Insira o código da primeira carta: \n");
    scanf ("%s", codigo1);

    printf ("Insira a cidade da primeira carta: \n");
    scanf ("%s", &cidade1);

    printf ("Insira a população da primeira carta: \n");
    scanf ("%lu", &populacao1);

    printf ("Insira a área em km² da primeira carta: \n");
    scanf ("%f", &area1);

    printf ("Insira o PIB em reais da primeira carta: \n");
    scanf ("%f", &pib1);

    printf ("Insira os pontos turísticos da primeira carta: \n");
    scanf ("%d", &pontos1);

    //Entrada de dados da carta 2
    printf ("Insira o estado da segunda carta: \n");
    scanf (" %s", &estado2);

    printf ("Insira o código da segunda carta: \n");
    scanf ("%s", codigo2);

    printf ("Insira a cidade da segunda carta: \n");
    scanf ("%s", &cidade2);

    printf ("Insira a população da segunda carta: \n");
    scanf ("%lu", &populacao2);

    printf ("Insira a área em km² da segunda carta: \n");
    scanf ("%f", &area2);

    printf ("Insira o PIB em reais da segunda carta: \n");
    scanf ("%f", &pib2);

    printf ("Insira os pontos turísticos da segunda carta: \n");
    scanf ("%d", &pontos2);

    //Cálculo da densidade demográfica
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //Cálculo do PIB per capita
    pibPerCapita1 = (float) pib1 / populacao1;
    pibPerCapita2 = (float) pib2 / populacao2;

    //Conversão do PIB para bilhões
    pib1Bilhoes = pib1 / 1000000000;
    pib2Bilhoes = pib2 / 1000000000;

    //Conversão da população para milhares
    populacaoMil1 = populacao1 / 1000;
    populacaoMil2 = populacao2 / 1000;

    //Cálculo do super poder
    superPoder1 = (float) (populacaoMil1 + area1 + pib1Bilhoes + pontos1 + pibPerCapita1 - densidade1);
    superPoder2 = (float) (populacaoMil2 + area2 + pib2Bilhoes + pontos2 + pibPerCapita2 - densidade2);

    //Exibição dos dados das cartas
    printf ("\nCarta 1: \n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %lu\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1Bilhoes);
    printf ("Pontos Turísticos: %d\n", pontos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf ("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf ("Super Poder: %.2f\n", superPoder1);

    printf ("\nCarta 2: \n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %lu\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2Bilhoes);
    printf ("Pontos Turísticos: %d\n", pontos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf ("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf ("Super Poder: %.2f\n", superPoder2);

    //Comparação das cartas
    printf("\n*** Comparação das Cartas ***\n");
    printf("Se 1: Carta 1 venceu | Se 0: Carta 2 venceu ou empatou\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);
    
    return 0;


}