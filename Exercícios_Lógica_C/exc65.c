#include <stdio.h>

int main(){
    int vetor[20], maior, menor, i, posMenor = 0, posMaior = 0;

    printf("Digite os valores do vetor: ");
    for(i = 0; i < 20; i = i + 1){
        scanf("%d", &vetor[i]);
    }

    menor = maior = vetor[0];
    for(i = 0; i < 20; i = i + 1){
        if (vetor[i] < menor){
            menor = vetor[i];
            posMenor = i;
        }
        if (vetor[i] > maior){
            maior = vetor[i];
            posMaior = i;
        }
    }

    printf("O maior numero do vetor eh %d, da posicao %d.\n", maior, posMaior);
    printf("O menor numero do vetor eh %d, da posicao %d.\n", menor, posMenor);
}