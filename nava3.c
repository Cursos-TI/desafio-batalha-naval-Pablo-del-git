#include <stdio.h>

#define TAMANHO_TABULEIRO 10 // Tamanho do tabuleiro

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tipo) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (x + i >= 0 && x + i < TAMANHO_TABULEIRO && y + j >= 0 && y + j < TAMANHO_TABULEIRO) {
                if (tipo == 0 && (i + j >= 0 && i + j <= 4)) { // Cone
                    tabuleiro[y + j][x + i] = 1;
                } else if (tipo == 1) { // Cruz
                    if (i == 0 || j == 0) {
                        tabuleiro[y + j][x + i] = 1;
                    }
                } else if (tipo == 2 && (abs(i) + abs(j) == 2)) { // Octaedro
                    tabuleiro[y + j][x + i] = 1;
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0}; // Inicializa o tabuleiro com 0

    // Posicionar navios
    tabuleiro[2][1] = 3; tabuleiro[2][2] = 3; tabuleiro[2][3] = 3; // Navio horizontal
    tabuleiro[0][3] = 3; tabuleiro[1][3] = 3; // Navio vertical
    tabuleiro[5][5] = 3; tabuleiro[6][6] = 3; tabuleiro[7][7] = 3; // Navio diagonal (esquerda para direita)
    tabuleiro[2][8] = 3; tabuleiro[3][7] = 3; // Navio diagonal (direita para esquerda)

    // Aplicar habilidades
    aplicarHabilidade(tabuleiro, 4, 4, 0); // Cone
    aplicarHabilidade(tabuleiro, 1, 1, 1); // Cruz
    aplicarHabilidade(tabuleiro, 6, 2, 2); // Octaedro

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}