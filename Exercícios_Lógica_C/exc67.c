#include <stdio.h>

int main(){
    int vetor1[10] = {1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9, 10}, vetor2[10] = {1, 2, 3, 10, 2, 4, 6, 8, 6, 10}, vetor3[10], i;

    for(i = 0; i < 10; i = i + 1){
        if(vetor1[i] >= vetor2[i]){
            vetor3[i] = vetor1[i];
        }
        else{
            vetor3[i] = vetor2[i];
        }
        printf("%d ", vetor3[i]);
    }

}