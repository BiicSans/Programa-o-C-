#include <stdio.h>

int main() {
    char codigo1[4], estado1[4], cidade1[21];
    int populacao1, pontosturisticos1;
    float area1, pib1;
    float densidade1, pibPerCapita1, superPoder1;

    char codigo2[4], estado2[4], cidade2[21];
    int populacao2, pontosturisticos2;
    float area2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("---Super Trunfo---\n");

    printf("---Carta A01--- \n");

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o estado (Sigla): \n");
    scanf("%s", estado1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosturisticos1 + pibPerCapita1 + (1.0 / densidade1);

    
    printf("\n---Carta A02--- \n");

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o estado (Sigla): \n");
    scanf("%s", estado2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

   
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosturisticos2 + pibPerCapita2 + (1.0 / densidade2);

     printf("\n--- Carta 01 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area Total: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
   
    printf("\n--- Carta 02 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area Total: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

   
    printf("\n--- Resultados das Comparações ---\n");

    printf("Populacao: %d\n", (populacao1 > populacao2));
    printf("Area: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turisticos: %d\n", (pontosturisticos1 > pontosturisticos2));
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2));
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));

    return 0;
}