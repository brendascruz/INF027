#include <stdio.h>
#define TAM 10

int main(){
    int lista[TAM], novaLista[TAM], i, j;
    int qtd_distintos = 0, repetido;

    printf("Digite a lista: ");
    for(i = 0; i < TAM; i = i + 1){
        scanf("%d", &lista[i]);
    }
    
    for(i = 0; i < TAM; i = i + 1) {
        repetido = 0;

        for(j = 0; j < qtd_distintos; j = j + 1) {
            if(lista[i] == novaLista[j]) {
                repetido = 1;
            }
        }

        if(repetido == 0) {
            novaLista[qtd_distintos] = lista[i];
            qtd_distintos = qtd_distintos + 1;
        }
    }
    printf("Quantidade de numeros distintos: %d\n", qtd_distintos);
    printf("Numeros distintos:\n");
    for(i = 0; i < qtd_distintos; i = i + 1) {
        printf("%d ", novaLista[i]);
    }
}