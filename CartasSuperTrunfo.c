#include <stdio.h>

//Desafio Novato - Supertrunfo
//Por: Leonardo Carrilo

int main() {
    
    //Declaração de variáveis
    char estado1[20], estado2[20];
    char codigo1[04], codigo2[04];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //Entrada de dados da carta 1
    printf ("Insira o estado da primeira carta: \n");
    scanf ("%s", &estado1);

    printf ("Insira o código da primeira carta: \n");
    scanf ("%s", codigo1);

    printf ("Insira a cidade da primeira carta: \n");
    scanf ("%s", &cidade1);

    printf ("Insira a população da primeira carta: \n");
    scanf ("%d", &populacao1);

    printf ("Insira a área da primeira carta: \n");
    scanf ("%f", &area1);

    printf ("Insira o PIB da primeira carta: \n");
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
    scanf ("%d", &populacao2);

    printf ("Insira a área da segunda carta: \n");
    scanf ("%f", &area2);

    printf ("Insira o PIB da segunda carta: \n");
    scanf ("%f", &pib2);

    printf ("Insira os pontos turísticos da segunda carta: \n");
    scanf ("%d", &pontos2);

    //Exibição dos dados das cartas
    printf ("\nCarta 1: \n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Pontos turísticos: %d\n", pontos1);

    printf ("\nCarta 2: \n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Pontos turísticos: %d\n", pontos2);

    return 0;

}