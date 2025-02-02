#include <stdio.h>

int main() {
    char estado, codigo[3], cidade[50];
    int populacao, turismo;
    float area, pib;

    printf("Escolha um estado (de A a H): \n");
    scanf("%c", &estado);

    printf("\nQual o nome da cidade escolhida? \n");
    scanf("%s", &cidade);

    printf("\nQual o código da carta (o estado + 01 a 04)? \n");
    scanf("%s", &codigo);

    printf("\nQual a população da cidade? \n");
    scanf("%d", &populacao);

    printf("\nQual o PIB da cidade em bilhões de reais? \n");
    scanf("%f", &pib);

    printf("\nQual a área da cidade em km²? \n");
    scanf("%f", &area);

    printf("\nQuantos pontos turisticos a cidade tem? \n");
    scanf("%d", &turismo);
    
    printf("\nEstado: %c", estado);
    printf("\nCódigo da carta: %s", codigo);
    printf("\nNome da cidade: %s", cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de pontos turísticos: %d \n", turismo);


    return 0;
}
