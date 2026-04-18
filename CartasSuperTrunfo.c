#include <stdio.h>

 int main(){
    char estado1[50],estado2[50];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, area2;
    double pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2, PIBperCapta1, PIBperCapta2;
    float superPoderCarta1 , superPoderCarta2;
    int resultadoPopulacao, resultadoPontosTuristicos, resultadoArea, resultadoPIB, resultadoDensidadePopulacional, resultadoSuperPoder, resultadoPibPerCapta;
    
    

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
    scanf(" %lf", &pib1);
    
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
    scanf(" %lf", &pib2);
    
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
    densidadePopulacional1 = (float)populacao1 / area1;
    printf("A Densidade Pupulacional da Carta 1 é: %.2f hab/km² \n", densidadePopulacional1);
    // criando inversão da variável densidade populacional
    float densidadeInvertida1 = 1 / densidadePopulacional1;

     // PIB per capta da carta 1
    PIBperCapta1 = pib1*1000000000.0 / (float)populacao1;
    printf("O PIB per Capta da Carta 1 é: %.2f reais\n", PIBperCapta1);

    // Super poder da carta 1
    superPoderCarta1 = (float)populacao1 + area1 + (float)(pib1 * 1000000000.0) + PIBperCapta1 + (float)pontosTuristicos1 + densidadeInvertida1;
    printf("O Super Poder da Carta 1 é: %.2f\n", superPoderCarta1);
   

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
    // criando inversão da variável densidade populacional
    float densidadeInvertida2 = 1 / densidadePopulacional2;
    // PIB per capta da carta 2
    PIBperCapta2 = (pib2*1000000000.0 / (float)populacao2);
    printf("O PIB per Capta da Carta 2 é: %.2f reais\n", PIBperCapta2);
    // Super poder da carta 2
    superPoderCarta2 = (float)populacao2 + area2 + (float)(pib2 * 1000000000.0) + PIBperCapta2 + (float)pontosTuristicos2 + densidadeInvertida2;
    printf("O Super Poder da Carta 2 é: %.2f\n", superPoderCarta2);

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoPibPerCapta = PIBperCapta1 > PIBperCapta2;
    resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    resultadoSuperPoder = superPoderCarta1 > superPoderCarta2;
    
    printf("\n--- Resultado da luta entre carta 1 e carta 2, sendo '1' para Vitória da CARTA 1. Sendo '0' para Vitória CARTA 2 ---\n"); 

    printf("O resultado pulação da Carta 1 x Carta 2: %d\n", resultadoPopulacao);
    printf("O resultado Tamanho da área da Carta 1 x Carta 2: %d\n", resultadoArea);
    printf("O resultado PIB da Carta 1 x Carta 2: %d\n", resultadoPIB);
    printf("O resultado quantidade de Pontos Turísticos da área da Carta 1 x Carta 2: %d\n", resultadoPontosTuristicos);
    printf("O resultado Densidade Populacional da Carta 1 x Carta 2: %d\n", resultadoDensidadePopulacional);
    printf("O resultado PIB per Capta da área Carta 1 x Carta 2: %d\n", resultadoPibPerCapta);
    printf("O resultado Super Poder da área Carta 1 x Carta 2: %d\n", resultadoSuperPoder);


    return 0;





 }
 