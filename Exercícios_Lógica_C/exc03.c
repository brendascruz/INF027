#include <stdio.h>

int main()
{
    float raio, area, perimetro;
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);
    area = 3.14 * raio * raio;
    perimetro = 2 * 3.14 * raio;
    printf("A area vale %.1f e o perimetro vale %.1f", area, perimetro);
}
