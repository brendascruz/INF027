#include <stdio.h>

int main()
{
    int dia;
    printf("Digite um numero correspondente a um dia da semana: ");
    scanf("%d", &dia);
    switch(dia){
        case 1: printf("O dia equivale a domingo."); break;
        case 2: printf("O dia equivale a segunda."); break;
        case 3: printf("O dia equivale a terca."); break;
        case 4: printf("O dia equivale a quarta."); break;
        case 5: printf("O dia equivale a quinta."); break;
        case 6: printf("O dia equivale a sexta."); break;
        case 7: printf("O dia equivale a sabado."); break;
        default: printf("O numero nao equivale a um dia da semana."); break;
    } 
}
