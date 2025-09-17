#include <stdio.h>

int main()
{
    float salario, desconto;
    printf("Qual o salario do funcionario: ");
    scanf("%f", &salario);
    desconto = (11.0 / 100.0) * salario;
    if (desconto > 334.29)
    {
        printf("O desconto sera de 334.29");
    }
    else
    {
        printf("O desconto sera de %.2f", desconto);
    }
}

