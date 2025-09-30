#include <stdio.h>
int main() {

    int tabuleiro[10][10] = {0}; // Matriz criada

    int navio1[3] = {3, 3, 3}; // navio 1 vertical
    int navio2[3] = {3, 3, 3}; // navio 2 horizontal
    int navio3[3] = {3, 3, 3}; // navio 3 diagonal principal
    int navio4[3] = {3, 3, 3}; // navio 4 diagonal secundária

    // navio1: vertical A1, A2, A3
    int linhaDoNavio1 = 0;
    int colunaDoNavio1 = 0;

    // navio2: horizontal A10, B10, C10
    int linhaDoNavio2 = 9;
    int colunaDoNavio2 = 0;

    // navio3: diagonal principal C3, D4, E5
    int linhaDoNavio3 = 2;
    int colunaDoNavio3 = 2;

    // navio4: diagonal inferior direita H8, I9, J10
    int linhaDoNavio4 = 7;
    int colunaDoNavio4 = 7;

    // posicionando navio 1 (vertical)
    for (int i = 0; i < 3; i++) {
        if (linhaDoNavio1 + i < 10 && tabuleiro[linhaDoNavio1 + i][colunaDoNavio1] == 0) {
            tabuleiro[linhaDoNavio1 + i][colunaDoNavio1] = navio1[i];
        }
    }

    // posicionando navio 2 (horizontal)
    for (int i = 0; i < 3; i++) {
        if (colunaDoNavio2 + i < 10 && tabuleiro[linhaDoNavio2][colunaDoNavio2 + i] == 0) {
            tabuleiro[linhaDoNavio2][colunaDoNavio2 + i] = navio2[i];
        }
    }

    // posicionando navio 3 (diagonal principal)
    for (int i = 0; i < 3; i++) {
        int linha = linhaDoNavio3 + i;
        int coluna = colunaDoNavio3 + i;
        if (linha < 10 && coluna < 10 && tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = navio3[i];
        }
    }

    // posicionando navio 4 (diagonal inferior direita)
    for (int i = 0; i < 3; i++) {
        int linha = linhaDoNavio4 + i; // diagonal para baixo
        int coluna = colunaDoNavio4 + i; // diagonal para direita
        if (linha < 10 && coluna < 10 && tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = navio4[i];
        }
    }

    // conteúdo para exibir o jogo na tela já com todos os dados
    printf(" TABULEIRO BATALHA NAVAL\n");

    printf("    ");
    for (int coluna = 0; coluna < 10; coluna++) {
        printf("%c ", 'A' + coluna);
    }
    printf("\n");

    for (int linha = 0; linha < 10; linha++) {
        printf("%2d  ", linha + 1);
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
