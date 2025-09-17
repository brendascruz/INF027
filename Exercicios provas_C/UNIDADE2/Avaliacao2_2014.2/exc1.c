#include <stdio.h>

int main(){
    int num, raiz, i, numOG;
    printf("Digite o numero para descobrir a raiz: ");
    scanf("%d", &num);
    numOG = num;
    raiz = 0;
    for(i = 1; num > 0; i = i + 2){
        num = num - i;
        raiz = raiz + 1;
    }

    if(num == 0){
        printf("A raiz exata de %d eh %d.\n", numOG, raiz);
    } else {
        printf("A raiz aproximada (parte inteira) de %d eh %d.\n", numOG, raiz - 1);
    }
}