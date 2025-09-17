#include <stdio.h>

int main(){
    int array[20] = {0}, i;

    for(i = 0; i < 20; i = i + 1){
        printf("Posicao %d, valor %d.\n", i, array[i]);
    }
}