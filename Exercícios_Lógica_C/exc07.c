//Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias

#include <stdio.h>

int main()
{
    int idade, dias, meses, anos;
    printf("Digite sua idade em dias: ");
    scanf("%d", &idade);
    dias = idade;
    meses = dias / 31;
    anos = dias / 365;
    printf("Sua idade equivale a %d dias, %d meses e %d anos", dias, meses, anos);
}
