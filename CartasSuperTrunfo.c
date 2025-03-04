#include <stdio.h>
#include <string.h>

int main(){
    char estado, estado2, cidade[30], cidade2[30];
    int numero, numero2, populacao, populacao2, turismo, turismo2;
    float pib, pib2, pibpercapita, pibpercapita2, area, area2, densidade, densidade2;
    double especial, especial2;

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
    especial = numero + populacao + area + pib + turismo + densidade + pibpercapita;

    printf("\nDADOS DA PRIMERIA CARTA:\n");
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
    getchar();
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
    especial2 = numero2 + populacao2 + area2 + pib2 + turismo2 + densidade2 + pibpercapita2;

    printf("\nDADOS DA SEGUNDA CARTA:\n");
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
    // FUNCIONALIDADE DA ATIVIDADE 1. COMENTADA PARA CRIAÇÃO DO CÓDIGO DA ATIVIDADE 2.

    // printf("RESULTADO DO COMBATE ENTRE AS CARTAS:\n");
    // printf("Estado:\nCarta 1: %c  X  Carta 2: %c\n", estado, estado2);
    // if(estado > estado2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(estado < estado2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };
    
    // printf("Número da Cidade:\nCarta 1: %02d  X  Carta 2: %02d\n", numero, numero2);
    // if(numero > numero2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(numero < numero2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("Nome da Cidade:\nCarta 1: %s  X  Carta 2: %s\n", cidade, cidade2);
    // if(cidade > cidade2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(cidade < cidade2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("População:\nCarta 1: %d  X  Carta 2: %d\n", populacao, populacao2);
    // if(populacao > populacao2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(populacao < populacao2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("Área em km²:\nCarta 1: %.2f  X  Carta 2: %.2f\n", area, area2);
    // if(area > area2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(area < area2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("PIB em bilhões de reais:\nCarta 1: %.2f  X  Carta 2: %.2f\n", pib, pib2);
    // if(pib > pib2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(pib < pib2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("Turismo:\nCarta 1: %d  X  Carta 2: %d\n", turismo, turismo2);
    // if(turismo > turismo2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(turismo < turismo2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("Densidade:\nCarta 1: %.4f  X  Carta 2: %.4f\n", densidade, densidade2);
    // if(densidade < densidade2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(densidade > densidade2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("PIB per Capita:\nCarta 1: %.4f  X  Carta 2: %.4f\n", pibpercapita, pibpercapita2);
    // if(pibpercapita > pibpercapita2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(pibpercapita < pibpercapita2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };

    // printf("RODADA ESPECIAL\n");
    // printf("Especial:\nCarta 1: %.4f  X  Carta 2: %.4f\n", especial, especial2);
    // if(especial > especial2){
    //     printf("Vencedor: Carta 1\n\n");
    // }
    // else if(especial < especial2) {
    //     printf("Vencedor: Carta 2\n\n");
    // }
    // else {
    //     printf("EMPATE!\n\n");
    // };
    
    int atr;

    do {
        printf("\nEscolha um atributo para o combate! (1 a 8)");
        printf("\n1) Estado");
        printf("\n2) Nome da cidade");
        printf("\n3) População");
        printf("\n4) Área");
        printf("\n5) PIB");
        printf("\n6) Número de pontos turísticos");
        printf("\n7) Densidade populacional");
        printf("\n8) PIB per Capita");
        printf("\n9) Especial!");
        printf("\n0) Para sair do jogo!\n");
        scanf("%d", &atr);
        switch (atr){
            case 1:
                printf("\n\nVocê escolheu: Estado\nCarta 1: %c  X  Carta 2: %c\n", estado, estado2);
                if(estado > estado2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(estado < estado2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 2:
                printf("\n\nVocê escolheu: Cidade\nCarta 1: %s  X  Carta 2: %s\n", cidade, cidade2);
                if(cidade > cidade2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(cidade < cidade2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 3:
                printf("\n\nVocê escolheu: População\nCarta 1: %d  X  Carta 2: %d\n", populacao, populacao2);
                if(populacao > populacao2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(populacao < populacao2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 4:
                printf("\n\nVocê escolheu: Área\nCarta 1: %.2f  X  Carta 2: %.2f\n", area, area2);
                if(area > area2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(area < area2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 5:
                printf("\n\nVocê escolheu: Cidade\nCarta 1: %.2f  X  Carta 2: %.2f\n", pib, pib2);
                if(pib > pib2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(pib < pib2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 6:
                printf("\n\nVocê escolheu: Pontos Turísticos\nCarta 1: %d  X  Carta 2: %d\n", turismo, turismo2);
                if(turismo > turismo2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(turismo < turismo2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 7:
                printf("\n\nVocê escolheu: Densidade\nCarta 1: %.2f  X  Carta 2: %.2f\n", densidade, densidade2);
                if(densidade < densidade2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(densidade > densidade2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 8:
                printf("\n\nVocê escolheu: PIB per capita\nCarta 1: %.2f  X  Carta 2: %.2f\n", pibpercapita, pibpercapita2);
                if(pibpercapita > pibpercapita2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(pibpercapita < pibpercapita2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 9:
                printf("\n\nVocê escolheu: Especial!\nCarta 1: %.4f  X  Carta 2: %.4f\n", especial, especial2);
                if(especial > especial2){
                    printf("Vencedor: Carta 1\n\n");
                }
                else if(especial < especial2) {
                    printf("Vencedor: Carta 2\n\n");
                }
                else {
                    printf("EMPATE!\n\n");
                }
                break;
            case 0:
                printf("\nSaindo do jogo! Até mais!\n\n");
                break;
            default:
                printf("\nOpção inválida, tente novamente.\n\n");
                break;
        }
    }
    while (atr != 0);


    return 0;
}
