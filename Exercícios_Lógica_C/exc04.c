//Dado os três lados de um triângulo determinar o perímetro do mesmo.

#include <stdio.h>
 int main()
 {
    int lado1, lado2, lado3, per;
    printf("Digite o valor do lado 1 do triangulo: ");
    scanf("%d", &lado1);
    printf("Digite o valor do lado 2 do triangulo: ");
    scanf("%d", &lado2);
    printf("Digite o valor do lado 3 do triangulo: ");
    scanf("%d", &lado3);
    per = lado1 + lado2 + lado3;
    printf("O perimetro do triangulo vale %d", per);
 }