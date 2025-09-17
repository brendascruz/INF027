#include <stdio.h>

int main()
{
    float num1, num2, num3, mediap;
    printf("Escreva um numero: ");
    scanf("%f", &num1);
    printf("Escreva um outro numero: ");
    scanf("%f", &num2);
    printf("Escreva um outro numero: ");
    scanf("%f", &num3);
    
    if (num1 > num2 && num1 > num3)
    {
        mediap = ((num1 * 5) + (num2 * 2.5) + (num3 * 2.5)) / 10;
    }
    else if (num2 > num1 && num2 > num3)
    {
        mediap = ((num2 * 5) + (num1 * 2.5) + (num3 * 2.5)) / 10;
    }
    else
    {
        mediap = ((num3 * 5) + (num2 * 2.5) + (num1 * 2.5)) / 10;
    }
    printf("A media ponderada entre eles vale: %.2f", mediap);
}