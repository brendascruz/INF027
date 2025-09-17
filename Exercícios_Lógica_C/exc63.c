#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10], soma[10], i;
    
    printf("Digite os valores do vetor 1: \n");
    for(i = 0; i < 10; i = i + 1){
        scanf("%d", &vetor1[i]);
    }
    printf("Digite os valores do vetor 2: \n");
    for(i = 0; i < 10; i = i + 1){
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 10; i = i + 1){
        soma[i] = vetor1[i] + vetor2[i];
    }
    printf("A soma desses vetores resulta em: ");
    for(i = 0; i < 10; i = i + 1){
        printf("%d ", soma[i]);
    }
}
