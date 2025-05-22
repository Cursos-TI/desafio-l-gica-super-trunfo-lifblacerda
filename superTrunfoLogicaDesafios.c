#include <stdio.h>

int main() {
    // Variaveis da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    
    int opcao;
    int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

    // Entrada e exibicao dos dados da carta 1
    printf("Carta 1:\n");

    printf("Estado:\n");
    scanf(" %c", &estado1);

    printf("Código:\n");
    scanf("%s", codigo1);

    printf("Cidade:\n");
    fgets(nomeCidade1, 50, stdin);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (em km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    // Entrada e exibicao dos dados da carta 2
    printf("\nCarta 2:\n");

    printf("Estado:\n");
    scanf(" %c", &estado2);

    printf("Código:\n");
    scanf("%s", codigo2);

    printf("Cidade:\n");
    fgets(nomeCidade2, 50, stdin);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparacao
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %sPopulação: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %sPopulação: %d\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    // Calculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Menu para o usuário escolher o atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nComparação de Cartas (atributo escolhido):\n");
    printf("Carta 1 - %s", nomeCidade1);
    printf("Carta 2 - %s", nomeCidade2);

    // Comparacao com switch
    switch (opcao) {
        case 1:
            printf("População: %d x %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Área: %.2f x %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("PIB: %.2f x %.2f bilhões de reais\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Populacional: %.2f x %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 venceu!\n");  // MENOR vence!
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("PIB per Capita: %.2f x %.2f reais\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    // Mostrar menu e ler dois atributos validos 
    int atributo1, atributo2;
    
    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");
    printf("Digite a opção:\n"); scanf("%d", &opcao1);

    if (atributo1 < 1 || atributo1 > 6) {
        printf("Atributo inválido. Encerrando programa.\n");
        return 1;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Digite a opção:\n"); scanf("%d", &opcao2);

    // Obter o valor dos atributos da carta 1 e 2
    switch (opcao1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
        default: printf("\nOpção inválida!\n"); return 1;
    }

    switch (opcao2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
        default: printf("\nOpção inválida!\n"); return 1;
    }

    // Comparacao e resultado
    printf("\nComparação das Cartas:\n");
    printf("Carta 1 - %s", nomeCidade1);
    printf("Carta 2 - %s", nomeCidade2);

    printf("\nAtributo 1: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("Carta 1: %.2f | Carta 2: %.2f\n", valor1_c1, valor1_c2);

    printf("\nAtributo 2: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("Carta 1: %.2f | Carta 2: %.2f\n", valor2_c1, valor2_c2);

    // Regra para densidade: menor valor vence
    float pontos1 = 0, pontos2 = 0;
    pontos1 += (opcao1 == 5) ? (valor1_c1 < valor1_c2 ? 1 : (valor1_c1 > valor1_c2 ? 0 : 0.5)) : (valor1_c1 > valor1_c2 ? 1 : (valor1_c1 < valor1_c2 ? 0 : 0.5));
    pontos2 += (opcao1 == 5) ? (valor1_c2 < valor1_c1 ? 1 : (valor1_c2 > valor1_c1 ? 0 : 0.5)) : (valor1_c2 > valor1_c1 ? 1 : (valor1_c2 < valor1_c1 ? 0 : 0.5));

    pontos1 += (opcao2 == 5) ? (valor2_c1 < valor2_c2 ? 1 : (valor2_c1 > valor2_c2 ? 0 : 0.5)) : (valor2_c1 > valor2_c2 ? 1 : (valor2_c1 < valor2_c2 ? 0 : 0.5));
    pontos2 += (opcao2 == 5) ? (valor2_c2 < valor2_c1 ? 1 : (valor2_c2 > valor2_c1 ? 0 : 0.5)) : (valor2_c2 > valor2_c1 ? 1 : (valor2_c2 < valor2_c1 ? 0 : 0.5));

    // Soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    printf("\nResultado Final: ");
    if (soma1 > soma2) {
        printf("Carta 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }


    return 0;
}