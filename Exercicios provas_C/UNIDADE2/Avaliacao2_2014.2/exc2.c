#include <stdio.h>

int main() {
    int N, contador = 0, numero = 3, anterior = 2;
    int ehPrimo, i;    

    printf("Digite a quantidade de pares: ");
    scanf("%d", &N);

    while (contador < N) {
        ehPrimo = 1;
        for (i = 2; i < numero; i = i + 1) {
            if (numero % i == 0) {
                ehPrimo = 0;
            }
        }
        if (ehPrimo) {
            if (numero - anterior == 2) {
                printf("%d, %d\n", anterior, numero);
                contador++;
            }
            anterior = numero; 
        }
        numero = numero + 1; 
    }
}

