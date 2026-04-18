#include <stdio.h>

 int main(){
    char estado1[50],estado2[50];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    float densidadePopulacional1, densidadePopulacional2, PIBperCapta1, PIBperCapta2;
    


    printf("Digite o estado da primeira carta: "); /// Início do preenchimento de dados da Primeira carta do Primeiro Estado
    scanf("%s", estado1);

    printf("Digite o código de sua carta: ");
    scanf("%s", codigo1);
    
    printf("Digite uma cidade deste estado: ");
    scanf(" %s", cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    
    printf("Digite o valor do PIB: ");
    scanf(" %f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o estado da segunda carta: "); /// Início de preenchimento de dados para a Primeira carta do Segundo Estado
    scanf("%s", estado2);

    printf("Digite o código de sua carta: ");
    scanf("%s", codigo2);
    
    printf("Digite uma cidade deste estado: ");
    scanf(" %s", cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    
    printf("Digite o valor do PIB: ");
    scanf(" %f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
   
    printf("----Apresentação carta 1----\n"); /// Dados da primeira carta
    printf("O estado é: %s\n", estado1);
    printf("O código é: %s\n", codigo1);
    printf("A cidade é: %s\n", cidade1);
    printf("A populacao é: %d mil habitantes \n", populacao1);
    printf("A area em km² é: %.2f km² \n", area1);
    printf("O PIB é: %.2f bilhôes de reais\n", pib1);
    printf("A quantidade de pontos turisticos é: %d\n", pontosTuristicos1);
    // Densidade populacional da carta 1
    densidadePopulacional1 = (float)(populacao1 / area1);
    printf("A Densidade Pupulacional da Carta 1 é: %.2f hab/km² \n", densidadePopulacional1);
     // PIB per capta da carta 1
    PIBperCapta1 = (pib1*1000000000.0 / populacao1);
    printf("O PIB per Capta da Carta 1 é: %.2f reais\n", PIBperCapta1);

    printf("----Apresentação carta 2----\n"); /// Dados da segunda carta
    printf("O estado é: %s\n", estado2);
    printf("O código é: %s\n", codigo2);
    printf("A cidade é: %s\n", cidade2);
    printf("A populacao é: %d mil habitantes \n", populacao2);
    printf("A area em km² é: %.2f km2 \n", area2);
    printf("O PIB é: %.2f bilhões de reais\n", pib2);
    printf("A quantidade de pontos turisticos é: %d\n", pontosTuristicos2);
    // Densidade populacial da carta 2
    densidadePopulacional2 = (float)(populacao2 / area2);
    printf("A Densidade Pupulacional da Carta 2 é: %.2f hab/km²\n", densidadePopulacional2);
    // PIB per capta da carta 2
    PIBperCapta2 = (pib2*1000000000.0 / populacao2);
    printf("O PIB per Capta da Carta 2 é: %.2f reais\n", PIBperCapta2);
    


    return 0;