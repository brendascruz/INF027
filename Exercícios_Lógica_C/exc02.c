#include <stdio.h>

int main()
{
    int raio;
    float area;
    float per; 
    printf("Diga qual o raio da circunferencia: ");
    scanf("%d", &raio);
    area = 3.14 * raio * raio;
    per = 2 * 3.14 * raio;
    printf("A area da circunferencia eh %f\n", area);
    printf("O perimetro da circunferencia eh %f", per);

}
