#include <stdio.h>

int main()
{
    int ang1, ang2, hora, min;
    printf("Digite o primeiro angulo: ");
    scanf("%d", &ang1);
    printf("Digite o segundo angulo: ");
    scanf("%d", &ang2);
    
    min = ang2 / 6;
    hora = (int) (ang1 - (min / 2.0)) / 30.0;
    printf("A hora equivale a %02d : %02d", hora, min);
}
