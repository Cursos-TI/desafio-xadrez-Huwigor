#include <stdio.h>

int main() {
    printf("=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ ===\n\n");

    // Constantes para o número de movimentos de cada peça
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // 1. Movimento da Torre (usando for) - 5 casas para a direita
    printf("Movimento da Torre (%d casas para a direita):\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimento do Bispo (usando while) - 5 casas na diagonal superior direita
    printf("Movimento do Bispo (%d casas na diagonal superior direita):\n", MOVIMENTOS_BISPO);
    int movimentos_feitos = 0;
    while (movimentos_feitos < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        movimentos_feitos++;
    }
    printf("\n");

    // 3. Movimento da Rainha (usando do-while) - 8 casas para a esquerda
    printf("Movimento da Rainha (%d casas para a esquerda):\n", MOVIMENTOS_RAINHA);
    int contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < MOVIMENTOS_RAINHA);

    return 0;
}