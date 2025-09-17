#include <stdio.h>

int main()
{
    int ano;
    printf("Digite um ano e eu direi se ele eh bissexto ou nao: ");
    scanf("%d", &ano);
    if (ano % 4 == 0)
    {
        if (ano % 100 == 0)
        {
            if (ano % 400 == 0)
            {
                printf("Esse ano eh bissexto.\n");
            }
            else
            {
                printf("Esse ano nao eh bissexto.\n");
            }
        }
        else
        {
            printf("Esse ano eh bissexto.\n");
        }
    }
    else
    {
        printf("Esse ano nao eh bissexto.\n");
    }
}