#include <stdio.h>

int main(){
    int vetor1[10] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 323};
    int vetor2[10] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
    int i, j, encontrado;

     for (i = 0; i < 10; i++) {
        encontrado = 0; 
        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                encontrado = 1;
            }
        }
        if (!encontrado) {
            printf("%d ", vetor1[i]);
        }
    }
}