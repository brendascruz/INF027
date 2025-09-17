//Sabendo que triângulo é uma figura geométrica de três lados onde cada um dos lados é menor que a soma dos outros dois, escreva um programa em C, que receba três valores
//e verifique e imprima se eles podem ser os comprimentos dos lados de um triângulo. 

#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    printf("Digite o lado 1 do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o lado 2 do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o lado 3 do triangulo: ");
    scanf("%f", &lado3);
    if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
    {
        printf("Esses podem ser os comprimentos de lados de um triangulo.");
    }
    else
    {
        printf("Esses nao podem ser os comprimentos de lados de um triangulo.");
    }
}


