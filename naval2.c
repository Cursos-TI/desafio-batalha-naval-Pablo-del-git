#include <stdio.h>

#define TAMANHO_TABULEIRO 10 // Tamanho do tabuleiro

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Criar um tabuleiro vazio
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Inicializar o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }

    // Posicionar o navio horizontalmente
    int x_h = 1; // Coordenada X do navio horizontal
    int y_h = 2; // Coordenada Y do navio horizontal
    int tamanho_h = 3; // Tamanho do navio horizontal

    for (int j = 0; j < tamanho_h; j++) {
        tabuleiro[y_h][x_h + j] = 3; // 3 representa parte do navio
    }

    // Posicionar o navio verticalmente
    int x_v = 3; // Coordenada X do navio vertical
    int y_v = 0; // Coordenada Y do navio vertical
    int tamanho_v = 2; // Tamanho do navio vertical

    for (int i = 0; i < tamanho_v; i++) {
        tabuleiro[y_v + i][x_v] = 3; // 3 representa parte do navio
    }

    // Posicionar o navio diagonalmente (da esquerda para a direita)
    int x_d1 = 5; // Coordenada X do navio diagonal
    int y_d1 = 5; // Coordenada Y do navio diagonal
    int tamanho_d1 = 3; // Tamanho do navio diagonal

    for (int i = 0; i < tamanho_d1; i++) {
        tabuleiro[y_d1 + i][x_d1 + i] = 3; // 3 representa parte do navio
    }

    // Posicionar o navio diagonalmente (da direita para a esquerda)
    int x_d2 = 8; // Coordenada X do navio diagonal
    int y_d2 = 2; // Coordenada Y do navio diagonal
    int tamanho_d2 = 2; // Tamanho do navio diagonal

    for (int i = 0; i < tamanho_d2; i++) {
        tabuleiro[y_d2 + i][x_d2 - i] = 3; // 3 representa parte do navio
    }

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}