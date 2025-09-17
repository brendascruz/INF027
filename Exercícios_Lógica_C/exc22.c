#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("O modulo desse numero eh %d", -num);
    }
    else
    {
        printf("O modulo desse numero eh %d", num);
    }
}