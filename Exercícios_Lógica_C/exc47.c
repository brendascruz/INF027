#include <stdio.h>

int main()
{
    int a, b, resto;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    for(resto = a; resto >= b; resto = resto - b)
    {
    }
    printf("O resto da divisão de %d por %d é: %d\n", a, b, resto);
}