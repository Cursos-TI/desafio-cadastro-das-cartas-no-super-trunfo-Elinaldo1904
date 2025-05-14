#include <stdio.h>

#define TOTAL_CARTAS 2

// Definindo uma estrutura para representar uma carta
typedef struct {
    char estado;
    char codigo[4];  // Ex: "A01", "B03"
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *carta, int numero) {
    printf("\n--- Cadastro da Carta %d ---\n", numero + 1);
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);  // Lê até a quebra de linha

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(const Carta *carta, int numero) {
    printf("\n=== Informações da Carta %d ===\n", numero + 1);
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %d habitantes\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: R$ %.2f bilhões\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontosTuristicos);
}

int main() {
    Carta cartas[TOTAL_CARTAS];

    // Cadastro das cartas
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        cadastrarCarta(&cartas[i], i);
    }

    // Exibição das cartas
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        exibirCarta(&cartas[i], i);
    }

    return 0;
}
