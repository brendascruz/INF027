#include <stdio.h>

int main()
{
    int a, b, resto, quo = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    for(resto = a; resto >= b; resto = resto - b)
    {
        quo = quo + 1;
    }
    printf("O quociente equivale a %d.", quo);
}