#include <stdio.h>

int main() {
    int num1, num2;
    int soma1 = 0, soma2 = 0;
    int i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for (i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0) {
            soma1 += i;
        }
    }

    for (i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0) {
            soma2 += i;
        }
    }

    if (soma1 == num2 && soma2 == num1) {
        printf("Os numeros %d e %d sao amigos!\n", num1, num2);
    } else {
        printf("Os numeros %d e %d nao sao amigos.\n", num1, num2);
    }
}
