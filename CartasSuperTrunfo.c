#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, codigo[3], cidade[20];
    int populacao, turismo;
    float area, pib;

    printf("Escolha um estado (de A a H): \n");
    scanf("%c", &estado);

    printf("\nQual o nome da cidade escolhida? \n");
    scanf("%s", &cidade);

    printf("\nQual o código da carta (o estado + 01 a 04)? \n");
    scanf("%s", &codigo);

    printf("\nQual a população da cidade? \n");
    scanf("%f", &populacao);

    printf("\nQual o PIB da cidade em bilhões de reais? \n");
    scanf("%f", &pib);

    printf("\nQual a área da cidade em km²? \n");
    scanf("%f", &area);

    printf("\nQuantos pontos turisticos a cidade tem? \n");
    scanf("%d", &turismo);
    
    printf("\n\nEstado: %c \nCódigo da carta: %s \n", estado, codigo);
    printf("Nome da cidade: %s \nPopulação: %d \n", cidade, populacao);
    printf("Área: %.2f km² \nPIB: %.2f bilhões de reais \n", area, pib);
    printf("Número de pontos turísticos: %d \n", turismo);


    return 0;
}
