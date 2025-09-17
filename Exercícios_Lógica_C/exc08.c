//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius 

#include <stdio.h>

int main()
{
    float tempC, tempF;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (tempF - 32) * (5 / 9);
    printf("A temperatura em Celsius equivale a %.2f", tempC);

}
