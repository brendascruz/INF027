#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int x, y;
    int temp;

    printf("Digite os 25 elementos da matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite os valores de x e y (entre 0 e 4): ");
    scanf("%d %d", &x, &y);

    for(j = 0; j < 5; j++) {
        temp = matriz[x][j];
        matriz[x][j] = matriz[y][j];
        matriz[y][j] = temp;
    }

    for(i = 0; i < 5; i++) {
        temp = matriz[i][x];
        matriz[i][x] = matriz[i][y];
        matriz[i][y] = temp;
    }

    for(i = 0; i < 5; i++) {
        temp = matriz[i][i]; 
        matriz[i][i] = matriz[i][4 - i];
        matriz[i][4 - i] = temp;
    }

    printf("\nMatriz modificada:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
