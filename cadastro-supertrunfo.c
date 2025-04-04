#include <stdio.h>

int main()

{

    char estado_01[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char estado_02[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char codigo_carta_01[4], codigo_carta_02[4];
    char cidade_01[20], cidade_02[20];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    int pontos_turisticos_01, pontos_turisticos_02;

    //Criação da carta 01

    printf("==== DADOS DA CARTA ====\n");

    printf("Digite o estado:\n");
    scanf("%c", &estado_01);

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo_carta_01);

    printf("Digite a cidade:\n");
    scanf("%s", cidade_01);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao_01);

    printf("Digite a area:\n");
    scanf("%f", &area_01);

    printf("Digite o PIB:\n");
    scanf("%f", &pib_01);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos_01);


    //Criação da carta 02

    printf("==== DADOS DA CARTA 02 ====\n");

    printf("Digite o estado:\n");
    scanf("%c", &estado_02);

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo_carta_02);

    printf("Digite a cidade:\n");
    scanf("%s", cidade_02);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao_02);

    printf("Digite a area:\n");
    scanf("%f", &area_02);

    printf("Digite o PIB:\n");
    scanf("%f", &pib_02);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos_02);
    
    printf("\n");

    //Impressão de Dados da Carta 01
   
    printf("==== CARTA 01 ====\n");
    printf("Estado: %c\n", estado_01);
    printf("Codigo: %s\n", codigo_carta_01);
    printf("Cidade: %s\n", cidade_01);
    printf("Populacao: %d Mil\n", populacao_01);
    printf("Area: %.2f km²\n", area_01);
    printf("PIB: %.2f bilhoes\n", pib_01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_01);


    printf("\n");

    //Impressão de Dados da Carta 02

    printf("==== CARTA 02 ====\n");
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigo_carta_02);
    printf("Cidade: %s\n", cidade_02);
    printf("Populacao: %d Mil\n", populacao_02);
    printf("Area: %.2f km²\n", area_02);
    printf("PIB: %.2f bilhoes\n", pib_02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_02);



    return 0;


}
