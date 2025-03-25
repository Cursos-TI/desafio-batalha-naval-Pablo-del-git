#include <stdio.h>

#define TAMANHO_TABULEIRO 5 // Tamanho do tabuleiro

void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Criar um tabuleiro vazio
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Inicializar o tabuleiro com água
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = '~'; // '~' representa água
        }
    }

    // Posicionar o navio horizontalmente
    int x_h = 1; // Coordenada X do navio horizontal
    int y_h = 2; // Coordenada Y do navio horizontal
    int tamanho_h = 3; // Tamanho do navio horizontal

    for (int j = 0; j < tamanho_h; j++) {
        tabuleiro[y_h][x_h + j] = 'N'; // 'N' representa parte do navio
    }

    // Posicionar o navio verticalmente
    int x_v = 3; // Coordenada X do navio vertical
    int y_v = 0; // Coordenada Y do navio vertical
    int tamanho_v = 2; // Tamanho do navio vertical

    for (int i = 0; i < tamanho_v; i++) {
        tabuleiro[y_v + i][x_v] = 'N'; // 'N' representa parte do navio
    }

    // Exibir as coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    for (int j = 0; j < tamanho_h; j++) {
        printf("(%d, %d)\n", x_h + j, y_h);
    }

    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < tamanho_v; i++) {
        printf("(%d, %d)\n", x_v, y_v + i);
    }

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}