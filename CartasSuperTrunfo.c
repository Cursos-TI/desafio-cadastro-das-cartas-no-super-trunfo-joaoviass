#include <stdio.h>

int main() {
    char codigo[4]; //CODIGO DA CARTA
    char nome[50]; //NOME DA CIDADE
    long int populacao; //POPULAÇÃO
    long double area; //ÁREA
    long double pib; //PIB
    long int pontos_turisticos; //PONTOS TURÍSTICOS
    char estado;  //ESTADO

    printf("Estado (A-H):\n");
    scanf(" %c", &estado); //O espaço antes do %c ajuda a ignorar espaços em branco que possam ficar no buffer.

    printf("Número da Carta (01-04):\n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%ld", &populacao);

    printf("Área: \n");
    scanf("%Lf", &area);

    printf("PIB: \n");
    scanf("%Lf", &pib);

    printf("Numeros de pontos turísticos: \n");
    scanf("%ld", &pontos_turisticos);

    long double densidade = populacao / area; //CALCULANDO A DENSIDADE
    long double pibpercap = pib / populacao; //CALCULANDO O PIB PERCAPITA
    float superpoder = populacao + area + pib + pontos_turisticos + pibpercap + (2 / densidade );

//ACIMA PEDI PARA A PESSOA COLOCAR AS IND=FORMAÇÕES NECESSARIAS PARA CADASTRAR A CARTA

    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Código da carta:");
    printf("%c", estado);
    printf("%s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %ld\n", populacao);
    printf("Área: %.2Lf Km2 \n", area);
    printf("PIB: %.2Lf Bilhões \n", pib);
    printf("Pontos turísticos: %ld\n", pontos_turisticos);
    printf("Densidade Populacional: %.15Lf\n", densidade);
    printf("PIB per Capita: %.15Lf\n", pibpercap);
    printf("Super Poder: %f\n", superpoder);

    char codigoC2[4]; //APENAS ADICIONEI O C2 A FRENTE DE CADA VARIAVEL PARA CRIAR A CARTA 2
    char nomeC2[50];
    long int populacaoC2;
    long double areaC2;
    long double pibC2;
    long int pontos_turisticosC2;
    char estadoC2;

    printf("Estado (A-H):\n");
    scanf(" %c", &estadoC2); //O espaço antes do %c ajuda a ignorar espaços em branco que possam ficar no buffer.

    printf("Número da Carta (01-04):\n");
    scanf("%s", &codigoC2);

    printf("Nome da cidade: \n");
    scanf("%s", &nomeC2);

    printf("População: \n");
    scanf("%ld", &populacaoC2);

    printf("Área: \n");
    scanf("%Lf", &areaC2);

    printf("PIB: \n");
    scanf("%Lf", &pibC2);

    printf("Numeros de pontos turísticos: \n");
    scanf("%ld", &pontos_turisticosC2);

    long double densidadeC2 = populacaoC2 / areaC2;
    long double pibpercapc2 = pibC2 / populacaoC2;
    float superpoderC2 = populacaoC2 + areaC2 + pibC2 + pontos_turisticosC2 + pibpercapc2 + (2 / densidadeC2 );

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoC2);
    printf("Código: %s\n", codigoC2);
    printf("Código da carta:");
    printf("%c", estadoC2);
    printf("%s\n", codigoC2);
    printf("Cidade: %s\n", nomeC2);
    printf("População: %ld\n", populacaoC2);
    printf("Área: %.2Lf km2 \n", areaC2);
    printf("PIB: %.2Lf Bilhões \n", pibC2);
    printf("Pontos turísticos: %ld\n", pontos_turisticosC2);
    printf("Densidade Populacional: %.15Lf\n", densidadeC2);
    printf("PIB per Capita: %.15Lf\n", pibpercapc2);
    printf("Super Poder: %f\n", superpoderC2);

    printf("\n***Comparação de cartas: ***\n");
    printf("População: %ld\n", populacao > populacaoC2);
    printf("Área: %ld\n", area > areaC2);
    printf("PIB: %ld\n", pib > pibC2);
    printf("Pontos Turísticos: %ld\n", pontos_turisticos > pontos_turisticosC2);
    printf("Densidade Populacional: %ld\n", densidade < densidadeC2);
    printf("PIB per Capita: %ld\n", pibpercap > pibpercapc2);
    printf("Super Poder: %ld\n", superpoder > superpoderC2);

    return 0;
}
