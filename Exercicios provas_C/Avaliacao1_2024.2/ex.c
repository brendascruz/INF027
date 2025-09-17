#include <stdio.h> 

int main()
{
    float d, a, total;
    int data;
    printf("Digite o valor da diaria: ");
    scanf("%f", &d);
    printf("Digite o valor do aumento diario: ");
    scanf("%f", &a);
    printf("Diga o dia de check in: ");
    scanf("%d", &data);
    if (data < 16)
    {
        total = (32 - data) * (d + (data - 1) * a);
    }
    else if (data >= 16)
    {
        total = (32 - data) * (d + (15 - 1) * a);
    }
    printf("O valor total da hospedagem equivale a %.2f", total);
}