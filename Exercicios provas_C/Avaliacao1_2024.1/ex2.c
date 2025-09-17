#include <stdio.h>

int main()
{
    int numA, numB, a1, a2, a3, b1, b2, b3;
    int d1, d2, d3, diferenca;
    printf("Digite o numero atual: ");
    scanf("%d", &numA);
    printf("Digite o numero do segredo: ");
    scanf("%d", &numB);
    
    a1 = (numA / 100);
    a2 = (numA / 10) % 10;
    a3 = numA % 10;
    b1 = (numB / 100);
    b2 = (numB / 10) % 10;
    b3 = numB % 10;
    d1 = a1 - b1;
    d2 = a2 - b2;
    d3 = a3 - b3;
    
    if(d1 < 0){d1 = d1 * (-1);}
    if(d2 < 0){d2 = d2 * (-1);}
    if(d3 < 0){d3 = d3 * (-1);}
    if(d1 > 5){d1 = 10 - d1;}
    if(d2 > 5){d2 = 10 - d2;}
    if(d3 > 5){d3 = 10 - d3;}
    diferenca = d1 + d2 + d3;
    printf("O menor numero de movimentos necessarios eh de %d", diferenca);
}