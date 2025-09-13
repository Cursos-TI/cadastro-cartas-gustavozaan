#include <stdio.h>

int main() {

    // Carta 1
    char estado[50];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turistas;

    // Carta 2
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistas2;

    // ---CARTA 1---
    printf("Digite o nome do Estado (Carta 1): \n");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta 1: (Ex A01, B03).\n");
    scanf("%3s", codigo);

    printf("Digite a Cidade do Estado escolhido (Carta 1): \n");
    scanf("%s", cidade);

    printf("Digite a População da Cidade (Carta 1): \n");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade em km² (Carta 1): \n");
    scanf("%f", &area);

    printf("Digite o Pib da Cidade (Carta 1): \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de turistas (Carta 1): \n");
    scanf("%i", &turistas);

    // ---CARTA 2--
    printf("Digite o nome do Estado (Carta 2): \n");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta 2: (Ex A01, B03).\n");
    scanf("%3s", codigo2);

    printf("Digite a Cidade do Estado escolhido (Carta 2): \n");
    scanf("%s", cidade2);

     printf("Digite a População da Cidade (Carta 2): \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade em km² (Carta 2): \n");
    scanf("%f", &area2);

    printf("Digite o Pib da Cidade (Carta 2): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de turistas (Carta 2): \n");
    scanf("%i", &turistas2);

    // ---EXIBIÇÃO---
    printf("\n --- CARTA 1 ---\n");
    printf("Estado: %s - Código: %s\n", estado, codigo);
    printf("Cidade: %s - População: %d\n", cidade, populacao);
    printf("Área: %.2f km² - PIB: %.2f - Turistas: %d\n", area, pib, turistas);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s - Código: %s\n", estado2, codigo2);
    printf("Cidade: %s - População: %d\n", cidade2, populacao2);
    printf("Área: %.2f km² - PIB: %.2f - Turistas: %d\n", area2, pib2, turistas2);

    return 0;

}