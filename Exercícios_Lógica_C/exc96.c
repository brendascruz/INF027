#include <stdio.h>

int main() {
    int matriz1[3][4];
    int matriz2[3][4];
    int soma[3][4];
    int diferenca[3][4];
    int i, j;

    printf("Digite os elementos da primeira matriz 3x4:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("Matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz 3x4:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("Matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            diferenca[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    printf("\nMatriz 1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Soma:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", soma[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Diferença:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", diferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}
