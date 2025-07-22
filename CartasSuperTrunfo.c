#include <stdio.h>

int main() {
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    printf("Cadastro da Carta 1:\n");
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    printf("Cadastro da Carta 2:\n");
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    float superPoder1 = populacao1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = populacao2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    printf("===== Carta 1 =====\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    printf("===== Carta 2 =====\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    printf("===== Comparação Atributo por Atributo =====\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));

    return 0;
}
