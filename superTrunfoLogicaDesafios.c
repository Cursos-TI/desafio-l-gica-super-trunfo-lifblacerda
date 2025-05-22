#include <stdio.h>
int main() {
    //Variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    //Entrada e exibicao dos dados da carta 1
    printf("Carta 1:\n");

    printf("Estado:\n");
    scanf("%c", &estado1);

    printf("Código:\n");
    scanf("%s", &codigo1);

    printf("Cidade:\n");
    fgets(cidade1, 50, stdin);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (em km²:\n)");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    //Entrada e exibicao dos dados da carta 2
    printf("Carta 2:\n");

    printf("Estado:\n");
    scanf("%c", &estado2);

    printf("Código:\n");
    scanf("%s", &codigo2);

    printf("Cidade:\n");
    fgets(cidade2, 50, stdin);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);
    
    

}