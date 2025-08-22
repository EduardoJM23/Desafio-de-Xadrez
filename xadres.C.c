#include <stdio.h>

int main() {
    // Constantes de movimento
    const int BISPO_PASSOS = 5;   // Bispo anda 5 casas
    const int TORRE_PASSOS = 5;   // Torre anda 5 casas
    const int RAINHA_PASSOS = 8;  // Rainha anda 8 casas

    printf("=== Movimentacao das Pecas ===\n\n");

    // ======================
    // Movimentação do Bispo
    // ======================
    printf("Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // ======================
    // Movimentação da Torre
    // ======================
    printf("Torre (5 casas para a direita):\n");
    for (int i = 0; i < TORRE_PASSOS; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ======================
    // Movimentação da Rainha
    // ======================
    printf("Rainha (8 casas para a esquerda):\n");
    int j = 0;
    while (j < RAINHA_PASSOS) {
        printf("Esquerda\n");
        j++;
    }
    printf("\n");

    // ======================
    // Movimentação do Cavalo
    // ======================
    printf("Cavalo (movimento em L: 2 para baixo e 1 para esquerda):\n");

    // Primeiro loop: 2 casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Segundo loop aninhado: 1 casa para esquerda
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 1);

    printf("\n=== Fim da Movimentacao ===\n");

    return 0;
}
