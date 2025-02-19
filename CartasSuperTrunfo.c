#include <stdio.h>

int main() {
    char codigo[4]; //CODIGO DA CARTA
    char nome[50]; //NOME DA CIDADE
    int populacao; //POPULAÇÃO
    float area; //ÁREA
    float pib; //PIB
    int pontos_turisticos; //PONTOS TURÍSTICOS
    char estado;  //ESTADO

    printf("Estado (A-H):\n");
    scanf(" %c", &estado); //O espaço antes do %c ajuda a ignorar espaços em branco que possam ficar no buffer.

    printf("Número da Carta (01-04):\n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    float densidade = populacao / area; //CALCULANDO A DENSIDADE
    float pibpercap = pib / populacao; //CALCULANDO O PIB PERCAPITA

//ACIMA PEDI PARA A PESSOA COLOCAR AS IND=FORMAÇÕES NECESSARIAS PARA CADASTRAR A CARTA

    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Código da carta:");
    printf("%c", estado);
    printf("%s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %2.f Km2 \n", area);
    printf("PIB: %2.f Bilhões \n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %2.f\n", densidade);
    printf("PIB per Capita: %2.f\n", pibpercap);

    char codigoC2[4]; //APENAS ADICIONEI O C2 A FRENTE DE CADA VARIAVEL PARA CRIAR A CARTA 2
    char nomeC2[50];
    int populacaoC2;
    float areaC2;
    float pibC2;
    int pontos_turisticosC2;
    char estadoC2;

    printf("Estado (A-H):\n");
    scanf(" %c", &estadoC2); //O espaço antes do %c ajuda a ignorar espaços em branco que possam ficar no buffer.

    printf("Número da Carta (01-04):\n");
    scanf("%s", &codigoC2);

    printf("Nome da cidade: \n");
    scanf("%s", &nomeC2);

    printf("População: \n");
    scanf("%d", &populacaoC2);

    printf("Área: \n");
    scanf("%f", &areaC2);

    printf("PIB: \n");
    scanf("%f", &pibC2);

    printf("Numeros de pontos turísticos: \n");
    scanf("%d", &pontos_turisticosC2);

    float densidadeC2 = populacaoC2 / areaC2;
    float pibpercapc2 = pibC2 / populacaoC2;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoC2);
    printf("Código: %s\n", codigoC2);
    printf("Código da carta:");
    printf("%c", estadoC2);
    printf("%s\n", codigoC2);
    printf("Cidade: %s\n", nomeC2);
    printf("População: %d\n", populacaoC2);
    printf("Área: %2.f km2 \n", areaC2);
    printf("PIB: %2.f Bilhões \n", pibC2);
    printf("Pontos turísticos: %d\n", pontos_turisticosC2);
    printf("Densidade Populacional: %2.f\n", densidadeC2);
    printf("PIB per Capita: %2.f\n", pibpercapc2);

    return 0;
}
