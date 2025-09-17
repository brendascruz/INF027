#include <stdio.h>

int main() {
    int N, i;
    int termo1 = 1, termo2 = 1, proximo;

    printf("Digite o numero de termos da serie de Fibonacci: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido! Digite um valor maior que zero.\n");
    } else if (N == 1) {
        printf("Serie de Fibonacci ate o 1 termo:\n");
        printf("1\n");
    } else {
        printf("Serie de Fibonacci ate o %d termo:\n", N);
        printf("%d ", termo1);
        printf("%d ", termo2);

        for (i = 3; i <= N; i++) {
            proximo = termo1 + termo2;
            printf("%d ", proximo);
            termo1 = termo2;
            termo2 = proximo;
        }
        printf("\n");
    }
}