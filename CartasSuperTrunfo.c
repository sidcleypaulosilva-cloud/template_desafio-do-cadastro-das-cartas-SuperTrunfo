#include <stdio.h>

int main() {

    int populacao, pontos, populacao2, pontos2;
    float Area, Pib, area2, Pib2;
    char Estado[50], Estado2[50];
    char Cidade[50], Cidade2[50];
    float Densidade, Densidade2;
    float Percapito, Percapito2;
    int codigo = 1;
    int codigo2 = 2;
    
    printf("----- Carta 0001 -----\n");

    printf("Digite o Estado: \n");
    scanf(" %[^\n]", Estado);

    printf("Digite a Cidade: \n");
    scanf(" %[^\n]", Cidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &pontos);

    printf("\n----- Carta 0002 -----\n");

    printf("Digite o Estado: \n");
    scanf(" %[^\n]", Estado2);

    printf("Digite a Cidade: \n");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib2);

    printf("Digite os Pontos Turisticos: \n");
    scanf("%d", &pontos2);

    Densidade = populacao / Area;
    Percapito = Pib / populacao;

    Densidade2 = populacao2 / area2;
    Percapito2 = Pib2 / populacao2;

    printf("\n===== RESULTADO =====\n");

    printf("\n----- CARTA %04d -----\n", codigo);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", Pib);
    printf("Pontos Turisticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f\n", Densidade);
    printf("PIB per Capita: %.2f\n", Percapito);

    printf("\n----- CARTA %04d -----\n", codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB per Capita: %.2f\n", Percapito2);

    return 0;
}
