#include <stdio.h>

int main(){
    int array[10], i, quant = 0;

    printf("Digite os valores do array: ");
    for(i = 0; i < 10; i = i + 1){
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0){
            quant = quant + 1;
        }
    }
    printf("A quantidade de numeros pares eh %d.", quant);
}