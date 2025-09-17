#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Digite outro numero: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("O maior numero eh o %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("O maior numero eh o %d", num2);
    }
    else 
    {
        printf("O maior numero eh o %d", num3);
    }
}