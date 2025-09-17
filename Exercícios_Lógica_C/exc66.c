#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], i;

    printf("Digite os valores do vetor: ");
    for(i = 0; i < 10; i = i + 1){
        scanf("%d", &vetor1[i]);
    }
    printf("Os valores do vetor 2 sao: ");
    for(i = 0; i < 10; i = i + 1){
        vetor2[i] = vetor1[i];
        printf("%d ", vetor2[i]);
    }
}