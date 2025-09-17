#include <stdio.h>

int main()
{
    int ind, num, soma = 0;
    float media;
    for(ind = 0; ind < 5; ind = ind + 1)
    {
        printf("Digite o numero %d: ", ind + 1);
        scanf("%d", &num);
        soma = soma + num;
    }
    media = soma / 5.0;
    printf("A media vale %.1f", media);
}