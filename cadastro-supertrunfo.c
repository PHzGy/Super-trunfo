#include <stdio.h>

int main()

{

    char estado_01[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char estado_02[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char código_carta_01[4], código_carta_02[4];
    char cidade_01[20], cidade_02[20];
    int população_01, população_02;
    float área_01, área_02;
    float pib_01, pib_02;
    int pontos_turisticos_01, pontos_turisticos_02;


    //Criação da carta 01

    printf("==== DADOS DA CARTA ====\n");

    printf("Digite o estado:\n");
    scanf("%c", &estado_01);

    printf("Digite o código da carta:\n");
    scanf("%s", código_carta_01);

    printf("Digite a cidade:\n");
    scanf("%s", cidade_01);

    printf("Digite a população:\n");
    scanf("%d", &população_01);

    printf("Digite a área:\n");
    scanf("%f", &área_01);

    printf("Digite o PIB:\n");
    scanf("%f", &pib_01);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos_01);


    //Criação da carta 02

    printf("==== DADOS DA CARTA 02 ====\n");

    printf("Digite o estado:\n");
    scanf("%c", &estado_02);

    printf("Digite o código da carta:\n");
    scanf("%s", código_carta_02);

    printf("Digite a cidade:\n");
    scanf("%s", cidade_02);

    printf("Digite a população:\n");
    scanf("%d", &população_02);

    printf("Digite a área:\n");
    scanf("%f", &área_02);

    printf("Digite o PIB:\n");
    scanf("%f", &pib_02);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos_02);
    

    //Impressão de Dados da Carta 01
   
    printf("==== CARTA 01 ====\n");
    printf("Estado: %c\n", estado_01);
    printf("Código: %s\n", código_carta_01);
    printf("Cidade: %s\n", cidade_01);
    printf("População: %d Mil\n", população_01);
    printf("Área: %.2f km²\n", área_01);
    printf("PIB: %.2f bilhões\n", pib_01);
    printf("Pontos turísticos: %d\n", pontos_turisticos_01);


    //Impressão de Dados da Carta 02

    printf("==== CARTA 02 ====\n");
    printf("Estado: %c\n", estado_02);
    printf("Código: %s\n", código_carta_02);
    printf("Cidade: %s\n", cidade_02);
    printf("População: %d Mil\n", população_02);
    printf("Área: %.2f km²\n", área_02);
    printf("PIB: %.2f bilhões\n", pib_02);
    printf("Pontos turísticos: %d\n", pontos_turisticos_02);



    return 0;


}
