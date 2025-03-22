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
    float densidadePopulacional1 = 0.0;
    float densidadePopulacional2 = 0.0;
    float pibPerCapita1 = 0.0; 
    float pibPerCapita2 = 0.0;
    float superPoder1 = 0.0;
    float superPoder2 = 0.0;
    

    printf("Carta 1 - Digite a populacao: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("\n\n");
    
    printf("Carta 2 - Digite a População: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    densidadePopulacional1 = populacao1/area1;
    densidadePopulacional2 = populacao2/area2;
    pibPerCapita1 = pib1/populacao1; 
    pibPerCapita2 = pib2/populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1/densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1/densidadePopulacional2);

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


    return 0;
}