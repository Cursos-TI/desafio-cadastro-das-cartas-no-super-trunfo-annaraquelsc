#include <stdio.h>

int main()
{

    //variaveis definidas em int, float, char e char[]
    int pontosTuris1, pontosTuris2, populacao1, populacao2;
    float area1, area2, pib1, pib2;
    char estado1, estado2;
    char cidade1[50], cidade2[50], codCarta1[50], codCarta2[50];

    printf("Estado: "); //printf (o que será mostrado para o usuário)
    scanf(" %c", &estado1); //scanf para leitura de variaveis

    printf("Código da carta 1: ");
    scanf("%s", codCarta1); //"%" de acordo com cada tipo de váriavel 

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuris1);

    printf("\n");//printf vazio para dar um espaço entre os dados de uma carta para outra (que o usuário digitará)

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta 2: ");
    scanf("%s", codCarta2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuris2);

    printf("\nCarta 1:\n");//"\n" para separar carta 1 da carta 2
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuris1);

    printf("\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuris2);

    return 0;
}
