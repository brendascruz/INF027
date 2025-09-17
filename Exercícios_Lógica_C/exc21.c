#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Esse numero eh positivo.");
    }
    else if (num < 0)
    {
        printf("Esse numero eh negativo.");
    }
    else
    {
        printf("Esse numero vale zero.");
    }
}
