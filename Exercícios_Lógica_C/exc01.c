#include <stdio.h> 

int main ()

{
    int lado;
    int area;
    int per;
    printf("Diga qual eh o valor do lado do quadrado: ");
    scanf("%d", &lado);
    area = lado * lado;
    per = lado * 4;
    printf("O valor da area do quadrado equivale a %d\n", area);
    printf("O valor do perimetro do quadrado eh igual a %d", per);

}
