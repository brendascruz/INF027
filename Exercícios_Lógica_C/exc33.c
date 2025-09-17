#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite o valor do ponto X: ");
    scanf("%d", &x);
    printf("Digite o valor do ponto Y: ");
    scanf("%d", &y);
    
    if (x > 0 && y > 0)
    {
        printf("O ponto pertence ao primeiro quadrante.");
    }
    else if (x < 0 && y > 0)
    {
        printf("O ponto pertence ao segundo quadrante.");
    }
    else if (x < 0 && y < 0)
    {
        printf("O ponto pertence ao terceiro quadrante.");
    }
    else if (x > 0 && y < 0)
    {
        printf("O ponto pertence ao quarto quadrante.");
    }
    else if ((x == 0 && y != 0) || (y == 0 && x != 0))
    {
        printf("O ponto esta sob um dos eixos cartesianos.");
    }
    else
    {
        printf("O ponto esta na origem.");
    }
}
