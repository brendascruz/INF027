#include <stdio.h>

int main() {
    int matriz[6][6];
    int vetor[36];
    int i, j, k = 0;

    printf("Digite os 36 elementos da matriz 6x6:\n");
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            vetor[k] = matriz[i][j]; 
            k++;
        }
    }

    printf("\nVetor com os 36 elementos da matriz:\n");
    for(i = 0; i < 36; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

}
