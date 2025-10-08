#include <stdio.h>

int main() {
    char codigo[4];
    char estado[4];
    char cidade[21];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade, pibPerCapita; 

    // ----------- CARTA 01 -----------
    printf("Cadastro da Carta A01 \n");

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite o estado (Sigla): \n");
    scanf("%s", estado);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    densidade = populacao / area;
    pibPerCapita = pib * 1000000000 / populacao; // convertendo PIB para reais antes da divisão

    printf("\n--- Carta 01 ---\n");
    printf("Codigo: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area Total: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    // ----------- CARTA 02 -----------
    printf("\nCadastro da Carta A02 \n");

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", codigo);

    printf("Digite o estado (Sigla): \n");
    scanf("%s", estado);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    densidade = populacao / area;
    pibPerCapita = pib * 1000000000 / populacao;

    printf("\n--- Carta 02 ---\n");
    printf("Codigo: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area Total: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    return 0;
}

