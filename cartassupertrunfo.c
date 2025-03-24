#include <stdio.h>


int main(){
    unsigned long int populacao1, populacao2; 
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2; //em km²
    float pib1, pib2;
    char estado1 = 'A';
    char estado2 = 'B';
    char cidade1[10] = "01";
    char cidade2[10] = "02";
    char codigo1[10] = "A01";
    char codigo2[10] = "B02";
    float densidadePopulacional1 = 0.0; //=0.0 porque precisamos declarar as variaveis, mas esta conta sera feita depois do usuario inserir os valores das variaveis utilizadas na conta
    float densidadePopulacional2 = 0.0;
    float pibPerCapita1 = 0.0; 
    float pibPerCapita2 = 0.0;
    float superPoder1 = 0.0;
    float superPoder2 = 0.0;
    float inversodensidade1 = 0.0;
    float inversodensidade2 = 0.0;
    float densidadepopulacionalinversa1 = 0.0;
    float densidadepopulacionalinversa2 = 0.0;
    
//solicitando dados do usuario carta 1
    printf("Carta 1 - Digite a populacao: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("\n\n");
    
    //solicitando dados do usuario carta 2
    printf("Carta 2 - Digite a População: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    //depois do usuario inserir os valores, podemos fazer as contas de densidade populacional e pib per capita

    densidadePopulacional1 = populacao1/area1;
    densidadePopulacional2 = populacao2/area2;
    pibPerCapita1 = pib1/populacao1; 
    pibPerCapita2 = pib2/populacao2;

//calculo densidade populacional inversa

    inversodensidade2 = densidadePopulacional2 / 1;
 	densidadepopulacionalinversa2 = densidadePopulacional2 * inversodensidade2;

    inversodensidade1 = densidadePopulacional1 / 1;
 	densidadepopulacionalinversa1 = densidadePopulacional1 * inversodensidade1;

//calculo do super poder

    superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + densidadepopulacionalinversa1;
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + densidadepopulacionalinversa2;

    printf("\n\n");

    //Carta1
    printf("=======================================\n");
    printf("Carta 01\n\n");
    printf("codigo: %s\n", codigo1);
    printf("estado: %c\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %lu\n", populacao1);
    printf("pontos turísticos: %d\n", pontosTuristicos1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("=======================================\n");
    printf("\n\n");

    //Carta2
    printf("=======================================\n");
    printf("Carta 02\n\n");
    printf("codigo: %s\n", codigo2);
    printf("estado: %c\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %lu\n", populacao2);
    printf("pontos turísticos: %d\n", pontosTuristicos2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("=======================================\n");


    //Comparação das cartas
     /*
     1 - verdadeiro - carta 1
 
     0 - falso - carta 2
     */
 
     int populacao = populacao1 > populacao2;
     int area = area1 > area2;
     int PIB = pib1 > pib2;
     int pontos_turisticos = pontosTuristicos1 > pontosTuristicos2;
     int densidade_populacional = densidadepopulacionalinversa1 < densidadepopulacionalinversa2;
     int PIB_per_Capita = pibPerCapita1 > pibPerCapita2;
     int Super_Poder = superPoder1 > superPoder2;
 
 	//Exibir as características vencedoras das cartas
     printf("Características vencedoras das cartas:\n");
     printf("\n");
     printf("População: Carta %s venceu (%d)\n", populacao ? "1" : "2", populacao);
     printf("Área: Carta %s venceu (%d)\n", area ? "1" : "2", area);
     printf("PIB: Carta %s venceu (%d)\n", PIB ? "1" : "2", PIB);
     printf("Número de Pontos Turísticos: Carta %s venceu (%d)\n", pontos_turisticos ? "1" : "2", pontos_turisticos);
     printf("Densidade Populacional: Carta %s venceu (%d)\n", densidade_populacional ? "1" : "2", densidade_populacional);
     printf("PIB per Capita: Carta %s venceu (%d)\n", PIB_per_Capita ? "1" : "2", PIB_per_Capita);
     printf("Super Poder: Carta %s venceu (%d)\n", Super_Poder ? "1" : "2", Super_Poder);
     
 	return 0;
 
 }