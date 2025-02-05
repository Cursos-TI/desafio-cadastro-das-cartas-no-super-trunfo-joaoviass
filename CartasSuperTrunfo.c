#include <stdio.h>

#define ESTADOS 8  // Número total de estados (A até H)
#define CIDADES_POR_ESTADO 4  // Número de cidades por estado

// Estrutura para armazenar os atributos de uma cidade
typedef struct {
    char codigo[4];  // Código da cidade (ex: A01, B02)
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[ESTADOS][CIDADES_POR_ESTADO];  // Matriz de cidades (8 estados x 4 cidades)

    char pais[50], estadoNome[50];  // Variáveis para armazenar país e estado escolhidos pelo usuário
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};  // Letras dos estados

    // Entrada do País e Estado
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", pais);
    while (getchar() != '\n');  // Limpa o buffer

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estadoNome);
    while (getchar() != '\n');  // Limpa o buffer

    // Cadastro das Cartas
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            printf("\nCadastro da Cidade %c0%d no estado %s, país %s:\n", estados[i], j + 1, estadoNome, pais);

            // Definição do código da cidade (ex: A01, B02)
            sprintf(cidades[i][j].codigo, "%c0%d", estados[i], j + 1);

            printf("Nome da cidade: ");
            scanf(" %[^\n]", cidades[i][j].nome);
            while (getchar() != '\n');  // Limpa o buffer após o nome

            printf("População: ");
            scanf("%d", &cidades[i][j].populacao);
            while (getchar() != '\n');  // Limpa o buffer após a população

            printf("Área (km²): ");
            scanf("%f", &cidades[i][j].area);
            while (getchar() != '\n');  // Limpa o buffer após a área

            printf("PIB (em bilhões): ");
            scanf("%lf", &cidades[i][j].pib);
            while (getchar() != '\n');  // Limpa o buffer após o PIB

            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[i][j].pontos_turisticos);
            while (getchar() != '\n');  // Limpa o buffer após os pontos turísticos
        }
    }

    // Exibição dos Dados das Cartas
    printf("\n--- Cartas Cadastradas no Estado %s, País %s ---\n", estadoNome, pais);
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES_POR_ESTADO; j++) {
            printf("\nCidade %s:\n", cidades[i][j].codigo);
            printf("Nome: %s\n", cidades[i][j].nome);
            printf("População: %d habitantes\n", cidades[i][j].populacao);
            printf("Área: %.2f km²\n", cidades[i][j].area);
            printf("PIB: %.2lf bilhões\n", cidades[i][j].pib);
            printf("Pontos turísticos: %d\n", cidades[i][j].pontos_turisticos);
        }
    }

    return 0;
}
