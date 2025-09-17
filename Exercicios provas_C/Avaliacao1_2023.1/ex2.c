#include <stdio.h>

int main()
{
    int numA, numB, A1, A2, A3, B1, B2, B3, dif;
    dif = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numA);
    printf("Digite o segundo numero: ");
    scanf("%d", &numB);
    A1 = numA % 2;
    A2 = (numA / 2) % 2;
    A3 = (numA / 2) / 2;
    B1 = numB % 2;
    B2 = (numB / 2) % 2;
    B3 = (numB / 2) / 2;
    if (A1 != B1)
    {
        dif = dif + 1;
    }
    if (A2 != B2)
    {
        dif = dif + 1;
    }
    if (A3 != B3)
    {
        dif = dif + 1;
    }
    if (dif == 1)
    {
        printf("Sao potencialmente sequenciais.");
    }
    else
    {
        printf("Nao sao potencialmente sequenciais.");
    }
}