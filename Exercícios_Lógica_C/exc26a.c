//Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores

#include <stdio.h>

int main()
{
    int num1, num2, num3, soma;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um outro numero: ");
    scanf("%d", &num2);
    printf("Digite um outro numero: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        if(num2 > num3)
        {
            soma = num1 + num2;
            printf("A soma dos dois maiores vale %d", soma);
        }
        if(num3 > num2)
        {
            soma = num1 + num3;
            printf("A soma dos dois maiores vale %d", soma);
        }
    }
    if (num2 > num1 && num2 > num3)
    {
        if(num1 > num3)
        {
            soma = num1 + num2;
            printf("A soma dos dois maiores vale %d", soma);
        }
        if(num3 > num1)
        {
            soma = num2 + num3;
            printf("A soma dos dois maiores vale %d", soma);
        }
    }
    if (num3 > num2 && num3 > num1)
    {
        if(num2 > num1)
        {
            soma = num3 + num2;
            printf("A soma dos dois maiores vale %d", soma);
        }
        if(num1 > num2)
        {
            soma = num1 + num3;
            printf("A soma dos dois maiores vale %d", soma);
        }
    }
}