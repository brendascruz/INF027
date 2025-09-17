#include <stdio.h>

#define TAMANHO 20 

int main() {
    int vetor[TAMANHO]; 
    int i, j;
    int candidato;
    int repetido;

    vetor[0] = 0; 
    for (i = 1; i < TAMANHO; i++) {
        candidato = vetor[i - 1] - i;

        repetido = 0;
        if (candidato >= 0) {
            for (j = 0; j < i; j++) {
                if (vetor[j] == candidato) {
                    repetido = 1; 
                }
            }
        } else {
            repetido = 1; 
        }

        if (!repetido) {
            vetor[i] = candidato;
        } else {
            vetor[i] = vetor[i - 1] + i;
        }
    }

    printf("Sequencia de Recaman:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
}
