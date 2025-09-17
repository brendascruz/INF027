//Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.

#include <stdio.h>

int main()
{
    int num1, num2, quo, resto;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    quo = num1 / num2;
    resto = num1 % num2;
    printf("O quociente da divisao vale %d e o resto da divisao vale %d", quo, resto);
}