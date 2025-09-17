#include <stdio.h>

int main()
{
    float aG, aM, aL;
    printf("Digite a porcentagem de acerto dos arremessos dentro do garrafao (valor decimal entre 0 e 1): ");
    scanf("%f", &aG);
    printf("Digite a porcentagem de acerto dos arremessos de meia distancia (valor decimal entre 0 e 1): ");
    scanf("%f", &aM);
    printf("Digite a porcentagem de acerto dos arremessos de longa distancia (valor decimal entre 0 e 1): ");
    scanf("%f", &aL);
    aG = aG * 2.0;
    aM = aM * 2.0;
    aL = aL * 3.0;
    if (aG > aM && aG > aL)
    {
        printf("PREFERIR ARREMESSOS DO GARRAFAO (%.2f PONTOS POR ARREMESSO)", aG);
    }
    else if (aM > aL)
    {
        printf("PREFERIR ARREMESSOS DE MEIA DISTANCIA (%.2f PONTOS POR ARREMESSO)", aM);
    }
    else
    {
        printf("PREFERIR ARREMESSOS DE LONGA DISTANCIA (%.2f PONTOS POR ARREMESSO)", aL);
    }
}