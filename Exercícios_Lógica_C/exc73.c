#include <stdio.h> 
#define TAM 20

int main(){
    int vetor[TAM] =  {3, 5, 2, 7, 5, 8, 5, 4, 6, 5, 9, 1, 5, 2, 5, 7, 3, 5, 4, 6};
    int i, media, moda = vetor[0], mediana, soma = 0, aux;
    int frequencia = 1, cont = 1;

    for(i = 0; i < TAM; i = i + 1){
        soma = soma + vetor[i];
    }
    media = soma / TAM;

    for(i = 0; i < TAM-1; i = i + 1){
        for(i = 0; i < TAM-1; i = i + 1){
            if(vetor[i] < vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i+ 1];
                vetor[i + 1] = aux;
            }
        }
    }

    if(TAM % 2 == 0){
        mediana = (vetor[(TAM / 2) - 1] + vetor[TAM / 2]) / 2;
    }
    else{
        mediana = vetor[TAM / 2];
    }

    for(i = 1; i < TAM; i = i + 1){
        if(vetor[i] == vetor[i - 1]){
            cont = cont + 1;
        }
        else {
            if(cont > frequencia){
                frequencia = cont;
                moda = vetor[i - 1];
            }
            cont = 1;
        }
    }

    if(cont > frequencia) {
        frequencia = cont;
        moda = vetor[TAM - 1];
    }

    printf("Moda: %d\n", moda);
    printf("Media: %d\n", media);
    printf("Mediana: %d\n", mediana);
}