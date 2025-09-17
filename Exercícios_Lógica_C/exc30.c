#include <stdio.h>

int main()
{
    float litro, valor, desconto;
    char tipo;
    printf("Digite o tipo do combustivel (A - Alcool e G - Gasolina): ");
    scanf("%c", &tipo);
    printf("Digite o numero de litros vendidos: ");
    scanf("%f", &litro);
    if (tipo == 'A')
    {
        valor = litro * 1.90;
        if (valor <= 25.0)
        {
            desconto = valor * 0.02;
            valor = valor - desconto;
        }
        else
        {
            desconto = valor * 0.04;
            valor = valor - desconto;
        }
    }
    else if (tipo == 'G')
    {
        valor = litro * 2.70;
        if (valor <= 25.0)
        {
            desconto = valor * 0.03;
            valor = valor - desconto;
        }
        else
        {
            desconto = valor * 0.05;
            valor = valor - desconto;
        }
    }
    printf("O valor a ser pago eh de %.2f", valor);
}