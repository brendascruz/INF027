#include <stdio.h>

int main()
{
    int num, soma = 0;
    for (num = 1; num <= 100; num = num + 1)
    {
        printf("%d ", num);
        soma = soma + num;
    }
    printf("\nsoma = %d", soma);
}