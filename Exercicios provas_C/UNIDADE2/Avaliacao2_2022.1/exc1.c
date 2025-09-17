#include <stdio.h>

int main() {
    int acm, posicao = 1, total = 0;
    int digito, i, fat;

    printf("Insira um número na notação ACM: ");
    scanf("%d", &acm);

    while (acm > 0) {
        digito = acm % 10; 
        
        fat = 1;
        for (i = 1; i <= posicao; i++) {
            fat = fat * i;
        }

        total = total + digito * fat;

        acm = acm / 10;   
        posicao++;
    }

    printf("Equivalente decimal: %d\n", total);
}
