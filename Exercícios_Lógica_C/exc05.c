//Ler um número inteiro e exibir o seu sucessor.

#include <stdio.h>

int main()
{
    int num, suc;
    printf("Digite um numero: ");
    scanf("%d", &num);
    suc = num + 1;
    printf("O sucessor de %d eh %d", num, suc);
    
}