// (...) Escreva um algoritmo em C que lê um número de até quatro dígitos e verifica se é um
// número de identificação válido de acordo com a fórmula de Luhn e imprima “Número
// "Válido”ou “Número Inválido”conforme o caso.

#include <stdio.h>

int main()
{
    int num, u, d, c, um, soma;
    printf("Digite o numero do cartao (4 digitos): ");
    scanf("%d", &num);
    u = num % 10;
    d = ((num / 10) % 10);
    c = (num / 100) % 10;
    um = (num / 1000);
    d = d * 2;
    if (d > 9)
    {
        d = d - 9;
    }
    um = um * 2;
    if (um > 9)
    {
        um = um - 9;
    }
    soma = u + d + c + um;
    if (soma % 10 == 0)
    {
        printf("Numero Valido.");
    }
    else
    {
        printf("Numero Invalido.");
    }
}