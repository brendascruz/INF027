#include <stdio.h>

int main(){
    int matriz[5][5];
    int i, j, simetrica = 1;

    printf("Digite a amtriz: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetrica = 0;
                break;
            }
        }
        if(simetrica == 0){
            break;
        }
    }
    if(simetrica == 1){
        printf("A matriz eh simetrica.");
    }
    else{
        printf("A matriz nao eh simetrica.");
    }
}