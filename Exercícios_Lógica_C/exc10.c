#include <stdio.h>

int main()
{
    int num, b1, b2, b4, b8, b16;
    printf("Escreva um numero menor do que 32: ");
    scanf("%d", &num);
    b1 = num % 2;
    num = num / 2;
    b2 = num % 2;
    num = num / 2;
    b4 = num % 2;
    num = num / 2;
    b8 = num % 2;
    num = num / 2;
    b16 = num % 2;
    printf("O numero em binario vale %d%d%d%d%d", b16, b8, b4, b2, b1);
}