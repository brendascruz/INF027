#include <stdio.h>
#define TAM_MAX 100

int main(){
    int vetor[TAM_MAX];
    int indice, repeticoes, valorAtual;

    printf("Digite os valores do vetor, para parar digite -1.\n");

    valorAtual = 0;

    for(indice = 0, repeticoes = 0; indice < TAM_MAX && valorAtual != -1; indice = indice + 1){
        printf("Valor da posicao %d: ", indice);
        scanf("%d", &valorAtual);
        if(valorAtual != -1){
            vetor[indice] = valorAtual;
            repeticoes = repeticoes + 1;
        }
    }
    printf("Resultado do vetor = [ ");
    for(indice = 0; indice < repeticoes; indice = indice + 1){
        printf(" %d ", vetor[indice]);
    }
    printf("]");
}