//Escreva um programa em C, que receba três números representando uma coordenada geográfica expressa em graus, minutos e segundos, calcule e imprima este valor em graus decimais. 
//Para tanto, considere que 60 minutos equivalem a um grau e 60 segundos equivalem a um minuto. 
//Assim, por exemplo,

#include <stdio.h>

int main()
{
    int graus, min, seg;
    float graus_dec;
    printf("Digite um numero que represente os graus de uma coordenada: ");
    scanf("%d", &graus);
    printf("Digite um numero que represente os minutos de uma coordenada: ");
    scanf("%d", &min);
    printf("Digite um numero que represente os segundso de uma coordenada: ");
    scanf("%d", &seg);
    min = min + seg / 60;
    seg = seg % 60;
    graus = graus + min / 60;
    min = min % 60;
    graus_dec = graus + (min / 60.0) + (seg / 3600.0);
    printf("Essas coordenadas equivalem a %.4f graus.", graus_dec);
}

// grausDecimais = graus + (minutos / 60.0) + (segundos / 3600.0)