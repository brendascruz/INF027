#include <stdio.h>

int main() {
    int A[4][3], B[3][2], C[4][2];
    int i, j, k;

    printf("Digite os elementos da matriz A (4x3):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz B (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz produto C (4x2):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }
}
