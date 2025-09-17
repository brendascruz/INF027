#include <stdio.h>

int main()
{
    int tipo, area;
    float valor, desconto;
    printf("Digite o  tipo de praga (Tipo 1 – ervas daninhas, Tipo 2 – gafanhotos, Tipo 3 – broca, Tipo 4 – todos acima): ");
    scanf("%d", &tipo);
    printf("Digite a area a ser contratada(em acres): ");
    scanf("%d", &area);
    switch (tipo)
    {
        case 1: valor = area * 50; break;
        case 2: valor = area * 100; break;
        case 3: valor = area * 150; break;
        case 4: valor = area * 250; break;
        default: printf("Voce nao digitou um tipo existente."); break;
    }
    if (area > 1000)
    {
        desconto = valor * 0.05;
        valor = valor - desconto;
    }
    if (valor > 750)
    {
        desconto = valor * 0.10;
        valor = valor - desconto;
    }
    printf("O valor a ser pago eh %.1f.",valor);
}