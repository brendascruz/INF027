#include <stdio.h>

int main(){
    int matriz[5][5];
    int somaLinhas[5], somaColunas[5];
    int i, j;

    for (i = 0; i < 5; i++) {
        somaLinhas[i] = 0;
        somaColunas[i] = 0;
    }

    printf("Digite a matriz: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }
    printf("\nSoma das linhas:\n");
    for (i = 0; i < 5; i++) {
        printf("Linha %d: %d\n", i, somaLinhas[i]);
    }

    printf("\nSoma das colunas:\n");
    for (j = 0; j < 5; j++) {
        printf("Coluna %d: %d\n", j, somaColunas[j]);
    }
}