#include <stdio.h>

int main () {
    // Navio posicionado verticalmente (3 partes)
    int navioVertical[3][2] = {
        {2, 3}, // Coordenada da primeira parte
        {2, 4}, // Coordenada da segunda parte
        {2, 5}, // Coordenada da terceira parte
    };

    // Navio posicionado horizontalmente (2 partes)
    int navioHorizontal[2][2] = {
        {5, 1}, // Coordenada da primeira parte
        {5, 2}, // Coordanda da segunda parte
    };

    //Exibição das coordenadas do navio vertical
    printf("Navio Vertifcal :\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\n"); //Separador

    //Exibição das coordenadas do navio horizontal
    printf("Navio Horizontal: \n");
    for (int i = 0; i < 2; i ++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    return 0;
}