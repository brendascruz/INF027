#include <stdio.h>

int main(){
    int matriz[5][5];
    int i, j;
    int somaDiag = 0, segDiag = 0;

    printf("Digite a amtriz: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        somaDiag = somaDiag + matriz[i][i];
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i + j == 4) {
                segDiag = segDiag + matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal = %d\n", somaDiag);
    printf("Soma da diagonal secundaria = %d", segDiag);
}