#include <stdio.h>
#include <string.h>

int main(){
    char estado, estado2, cidade[30], cidade2[30];
    int numero, numero2, populacao, populacao2, turismo, turismo2;
    float pib, pib2, pibpercapita, pibpercapita2, area, area2, densidade, densidade2;

    // Cadastro da primeira carta

    printf("Vamos cadastrar a primeira carta!\n\n");
    printf("Escolha um Estado (A a H):\n");
    scanf("%c", &estado);

    printf("Escolha uma cidade (1 a 4):\n");
    scanf("%d", &numero);
    getchar();

    printf("Qual o nome da cidade? \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual o PIB da cidade em bilhões de reais? \n");
    scanf("%f", &pib);

    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area);

    printf("Quantos pontos turisticos a cidade tem? \n");
    scanf("%d", &turismo);

    densidade = populacao / area;
    pibpercapita = pib / populacao;

    printf("DADOS DA PRIMERIA CARTA:\n");
    printf("\nEstado: %c", estado);
    printf("\nCódigo da carta: %c%02d", estado, numero);
    printf("\nNome da cidade: %s", cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de pontos turísticos: %d", turismo);
    printf("\nDensidade populacional: %.2f habitantes/km²", densidade);
    printf("\nPIB per Capita: %.2f bilhoes de reais", pibpercapita);
    printf("\n\n");

    // Cadastro da segunda carta

    printf("E agora vamos cadastrar a segunda carta!\n\n");
    printf("Escolha um Estado (A a H):\n");
    scanf("%c", &estado2);

    printf("Escolha uma cidade (1 a 4):\n");
    scanf("%d", &numero2);
    getchar();

    printf("Qual o nome da cidade? \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual o PIB da cidade em bilhões de reais? \n");
    scanf("%f", &pib2);

    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area2);

    printf("Quantos pontos turisticos a cidade tem? \n");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("DADOS DA SEGUNDA CARTA:\n");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo da carta: %c%02d", estado2, numero2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de pontos turísticos: %d", turismo2);
    printf("\nDensidade populacional: %.2f habitantes/km²", densidade2);
    printf("\nPIB per Capita: %.2f bilhoes de reais", pibpercapita2);
    printf("\n\n");

    // Combate das cartas

    printf("RESULTADO DO COMBATE ENTRE AS CARTAS:\n");


    return 0;
}
