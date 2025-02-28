#include <stdio.h>

int main () {
    // Tabulerio 10x10
    int tabuleiro[10][10] = {0};

    //Navio vertical (3 partes)
    int navioVertical[3][2] = {
        {2, 3},
        {2, 4},
        {2, 5},
    };

    //Navio horizontal (2 partes)
    int navioHorizontal [2][2] = {
        {5, 1},
        {6, 1},
    };

    //Navio diagonal (3 partes - cima direita)
    int navioDiagonal1[3][2] = {
        {1, 1},
        {1, 2},
        {1, 3},
    };

    //Navio diagonal (2 partes - baixo direita)
    int navioDiagonal2[2][2] = {
        {8, 2},
        {9, 3},
    };

    //Posicionamento dos navios no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVertical[i][0]][navioVertical[i][1]] = 3;
    }
    for (int i = 0; i < 2; i++) {
        tabuleiro[navioHorizontal[i][0]][navioHorizontal[i][1]] = 3;
    }
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioDiagonal1[i][0]][navioDiagonal1[i][1]] = 3;
    }
    for (int i = 0; i < 2; i++) {
        tabuleiro[navioDiagonal2[i][0]][navioDiagonal2[i][1]] = 3;
    }

    //Exibição do tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}