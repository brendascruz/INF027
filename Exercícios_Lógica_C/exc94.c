#include <stdio.h>

int main(){
    int matriz[6][6];
    int i, j, num;

    printf("Digite a amtriz: ");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o valor da multiplicacao: ");
    scanf("%d", &num);

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            matriz[i][j] = matriz[i][j] * num;
        }
    }

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("%3d ", matriz[i][j]); 
        }
        printf("\n");
    }
}