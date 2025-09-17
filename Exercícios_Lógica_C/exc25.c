#include <stdio.h>

int main()
{
    int mes;
    printf("Digite um numero equivalente a um mes (ex: 1 = janeiro): ");
    scanf("%d", &mes);
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        printf("Esse mes tem 31 dias!");
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        printf("Esse mes tem 30 dias!");
    }
    else 
    {
        printf("Esse mes tem 28 ou 29 dias, depende do ano!");
    }
}