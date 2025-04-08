#include <stdio.h>

// Variáveis Globais
unsigned int numCidade1 = 1, numCidade2 = 2;
char cidade1[50], cidade2[50];
unsigned int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
unsigned int pontosTuristicos1, pontosTuristicos2;
float dencidadePopulacao1, dencidadePopulacao2;
float pibCapita1, pibCapita2;
float somaTotal1, somaTotal2;

// Função para entrada de dados
void entradaDados(int x){
    printf("Insira o nome da Cidade:\n");
    if (x == 1){
        scanf("%s", cidade1);
    } else {
        scanf("%s", cidade2);
    }

    printf("Insira o número da População:\n");
    if (x == 1){
        scanf("%u", &populacao1);
    } else {
        scanf("%u", &populacao2);
    }

    printf("Insira o tamanho da Área da Cidade:\n");
    if (x == 1){
        scanf("%f", &area1);
    } else {
        scanf("%f", &area2);
    }

    printf("Insira o PIB:\n");
    if (x == 1){
        scanf("%f", &pib1);
    } else {
        scanf("%f", &pib2);
    }

    printf("Insira os Pontos Turísticos da Cidade:\n");
    if (x == 1){
        scanf("%u", &pontosTuristicos1);
    } else {
        scanf("%u", &pontosTuristicos2);
    }
}
