#include <stdio.h>

int main()
{
    int distancia;
    printf("Digite a distancia total: ");
    scanf("%d", &distancia);
    if(distancia % 8 == 0 || distancia == 8)
    {
        printf("A particula atingiu o sensor 3.");
    }
    else if(distancia % 8 == 7 || distancia == 7)
    {
        printf("A particula atingiu o sensor 2.");
    }
    else if(distancia % 8 == 6 || distancia == 6)
    {
        printf("A particula atingiu o sensor 1.");
    }
    else 
    {
        printf("A particula nao atingiu nenhum sensor.");
    }
}