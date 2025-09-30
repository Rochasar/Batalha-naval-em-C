#include <stdio.h>
int main() {

int tabuleiro [10] [10] =  {0}; // Matriz criada

int navio1 [3] {3, 3, 3}; //navio 1 criado, ocupando as 3 casas
int navio2 [3] {3, 3, 3}; // navio 2 ocupando ás mesmas quantidades de casas que o navio1

//navio1 vai ocupar na vertical: A1, A2, A3
int linhaDoNavio1 = 0;
int colunaDoNavio1 = 0;

//navio2 vai ocupar na horizontal: A10, B10, C10
int linhaDoNavio2 = 9; // como se conta a partir de 0 a casa 10 é correspondente a 9
int colunaDoNavio2 = 0;

// posicionando navio 1
 for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDoNavio1 + i][colunaDoNavio1] = navio1[i];
    }
// posicionando navio 2
  for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDoNavio2][colunaDoNavio2 + i] = navio2[i];
    }


//conteúdo para exibir o jogo na tela já com todos os dados
printf(" TABULEIRO BATALHA NAVAL\n");

printf("    ");
    for (int coluna = 0; coluna < 10; coluna++) {
        printf("%c ", 'A' + coluna);
    }
    printf("\n");

    
    for (int linha = 0; linha < 10; linha++) {
        printf("%2d  ", linha + 1); // numeração alinhada (1–10)
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;

}
