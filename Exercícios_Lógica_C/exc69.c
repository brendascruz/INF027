#include <stdio.h>

int main(){
    int vetor[15], num, i, vezes = 0;

    printf("Digite os valores do vetor: ");
    for(i = 0; i < 15; i = i + 1){
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a ser testado: ");
    scanf("%d", &num);

    for(i = 0; i < 15; i = i + 1){
        if(vetor[i] == num){
            vezes = vezes + 1;
        }
    }
    
    printf("O numero escolhido foi %d e ele aparece %d vezes no vetor.", num, vezes);
}