#include <stdio.h>

int main(){
    int matriz[10][10], i, j, permutacao = 1, soma = 0;

    printf("Digite os valores da matriz: ");
    for(i = 0; i < 10; i = i + 1){
        for(j = 0; j < 10; j = j + 1){
            printf("Posicao [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 10; i = i + 1){
        soma = 0;
        for(j = 0; j < 10; j = j + 1){
            if(matriz[i][j] > 0){
            soma = soma + 1;
            }
        } 
        if(soma != 1){
            permutacao = 0;
            break;
            }
    }
    for(j = 0; j < 10; j = j + 1){
        soma = 0;
        for(i = 0; i < 10; i = i + 1){
            if(matriz[i][j] > 0){
            soma = soma + 1;
            }
        } 
        if(soma != 1){
            permutacao = 0;
            break;
            }
    }
    if(permutacao == 1){
        printf("A matriz eh uma permutacao.");
    }
    else{
        printf("A matriz nao eh uma permutacao");
    }
}