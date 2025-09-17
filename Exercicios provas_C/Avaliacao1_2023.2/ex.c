#include <stdio.h>

int main()
{
    int max, num, menos, mais, op, result;
    printf("Digite qual o numero maximo que o computador pode representar: ");
    scanf("%d", &max);
    printf("Digite a expressao de 7 digitos: ");
    scanf("%d", &num);
    mais = num / 10000;
    op = (num / 1000) % 10;
    menos = num % 1000;
    switch (op){
        case 1: result = mais + menos; break;
        case 2: result = mais - menos; break;
        case 3: result = mais * menos; break;
        case 4: result = mais / menos; break;
    }
    if (result <= max)
    {
        printf("%d", result);
    }
    else
    {
        printf("OVERFLOW");
    } 
}