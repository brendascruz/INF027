////Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores

#include <stdio.h>

int main()
{
    int num1, num2, num3, soma;
    printf("Escreva um numero: ");
    scanf("%d", &num1);
    printf("Escreva um outro numero: ");
    scanf("%d", &num2);
    printf("Escreva um outro numero: ");
    scanf("%d", &num3);
    if (num1 < num2 && num1 < num3)
    {
        soma = num2 + num3;
    }
    else if (num2 < num1 && num2 < num3)
    {
        soma = num1 + num3;
    }
    else
    {
        soma = num1 + num2;
    }
    printf("A soma dos dois maiores numeros vale: %d", soma);
}
