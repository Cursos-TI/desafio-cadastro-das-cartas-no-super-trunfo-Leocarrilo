#include <stdio.h>

int main() {
    
    //Declaração de variáveis
    char estado1[20] = "Rio Grande do Sul", estado2[20] = "Paraná";
    char codigo1[4] = "R01", codigo2[4] = "P01";
    char cidade1[20] = "Porto Alegre", cidade2[20] = "Curitiba";
    unsigned long int populacao1 = 1389322, populacao2 = 1773718;
    float area1 = 495.39, area2 = 434.89;
    float pib1 = 76074563080, pib2 = 88308728400;
    int pontos1 = 38, pontos2 = 26;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float pib1Bilhoes, pib2Bilhoes;
    float populacaoMil1, populacaoMil2;
    float superPoder1, superPoder2;
    int opcao1, opcao2;
    int resultado1, resultado2;

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
    printf ("População: %lu habitantes\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1Bilhoes);
    printf ("Pontos Turísticos: %d\n", pontos1);
    printf ("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf ("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf ("Super Poder: %.2f\n", superPoder1);

    printf ("\nCarta 2: \n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %lu habitantes\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2Bilhoes);
    printf ("Pontos Turísticos: %d\n", pontos2);
    printf ("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf ("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf ("Super Poder: %.2f\n\n", superPoder2);

    //Primeiro menu - Escolha do primeiro atributo para comparação
    printf("### Escolha o primeiro atributo para comparação ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao1);

    //Verifica se o usuário realmente escolheu um atributo válido e compara o primeiro atributo
    switch (opcao1) {
        case 1:
            printf("\nVocê escolheu o atributo: População.\n");
            printf("População de %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
            printf("População de %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
           
        break;
        case 2:
            printf("\nVocê escolheu o atributo: Área.\n");
            printf("Área de %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Área de %s (%s): %.2f km²\n", cidade2, estado2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
          
        break;
        case 3:
            printf("\nVocê escolheu o atributo: PIB.)\n");
            printf("PIB de %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1Bilhoes);
            printf("PIB de %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2Bilhoes);
            resultado1 = pib1Bilhoes > pib2Bilhoes ? 1 : 0;
            
        break;
        case 4:
            printf("\nVocê escolheu o atributo: Pontos Turísticos.\n");
            printf("Pontos Turísticos de %s (%s): %d\n", cidade1, estado1, pontos1);
            printf("Pontos Turísticos de %s (%s): %d\n", cidade2, estado2, pontos2);
            resultado1 = pontos1 > pontos2 ? 1 : 0;
            
        break;
        case 5:
            printf("\nVocê escolheu o atributo: Densidade Demográfica.\n");
            printf("Densidade Demográfica de %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Densidade Demográfica de %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            resultado1 = densidade1 > densidade2 ? 1 : 0;
           
        break;
        case 6:
            printf("\nVocê escolheu o atributo: PIB per capita.\n");
            printf("PIB per capita de %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
            printf("PIB per capita de %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);
            resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;

        break;
        case 7:
            printf("\nVocê escolheu o atributo: Super Poder.\n");
            printf("Super Poder de %s (%s): %.2f\n", cidade1, estado1, superPoder1);
            printf("Super Poder de %s (%s): %.2f\n", cidade2, estado2, superPoder2);
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
           
        break;
        default:
            printf("Opção inválida! Tente novamente com um número entre 1 e 7.\n");
    }

    //Segundo menu - Escolha do segundo atributo para comparação
    printf("\n### Escolha o segundo atributo para comparação ###\n");
    printf("ATENÇÃO: O segundo atributo não pode ser o mesmo que o primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao2);

    ////Verifica se o usuário realmente escolheu um atributo válido e compara o segundo atributo
    if (opcao1 == opcao2) {
        printf("Você não pode escolher o mesmo atributo duas vezes! Tente novamente.\n");
        
    } else {

        switch (opcao2) {
            case 1:
                printf("\nVocê escolheu o atributo: População.\n");
                printf("População de %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
                printf("População de %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);
                resultado2 = populacaoMil1 > populacaoMil2 ? 1 : 0;
                
            break;
            case 2:
                printf("\nVocê escolheu o atributo: Área.\n");
                printf("Área de %s (%s): %.2f km²\n", cidade1, estado1, area1);
                printf("Área de %s (%s): %.2f km²\n", cidade2, estado2, area2);
                resultado2 = area1 > area2 ? 1 : 0;
                
            break;
            case 3:
                printf("\nVocê escolheu o atributo: PIB.)\n");
                printf("PIB de %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1Bilhoes);
                printf("PIB de %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2Bilhoes);
                resultado2 = pib1Bilhoes > pib2Bilhoes ? 1 : 0;
                
            break;
            case 4:
                printf("\nVocê escolheu o atributo: Pontos Turísticos.\n");
                printf("Pontos Turísticos de %s (%s): %d\n", cidade1, estado1, pontos1);
                printf("Pontos Turísticos de %s (%s): %d\n", cidade2, estado2, pontos2);
                resultado2 = pontos1 > pontos2 ? 1 : 0;
                
            break;
            case 5:
                printf("\nVocê escolheu o atributo: Densidade Demográfica.\n");
                printf("Densidade Demográfica de %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
                printf("Densidade Demográfica de %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
                resultado2 = densidade1 > densidade2 ? 1 : 0;
                
            break;
            case 6:
                printf("\nVocê escolheu o atributo: PIB per capita.\n");
                printf("PIB per capita de %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
                printf("PIB per capita de %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);
                resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;

            break;
            case 7:
                printf("\nVocê escolheu o atributo: Super Poder.\n");
                printf("Super Poder de %s (%s): %.2f\n", cidade1, estado1, superPoder1);
                printf("Super Poder de %s (%s): %.2f\n", cidade2, estado2, superPoder2);
                resultado2 = superPoder1 > superPoder2 ? 1 : 0;
                
            break;
            default:
                printf("Opção inválida! Tente novamente com um número entre 1 e 7.\n");
        }

        //Verifica o resultado final da comparação dos atributos
        if (resultado1 && resultado2) {
            printf("\n### A carta 1 (%s) venceu as duas comparações!!! ###.\n", cidade1);
        } else if (resultado1 != resultado2) {
            printf("\n### Empate!!! Cada carta venceu uma comparação ###");
        } else {
            printf("\n### A carta 2 (%s) venceu as duas comparações!!! ###.\n", cidade2);
        }

    }
        
    
    return 0;


}