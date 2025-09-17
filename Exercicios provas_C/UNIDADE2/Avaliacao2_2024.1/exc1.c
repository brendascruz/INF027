#include <stdio.h>
#define tam 50

int main(){
    int num, i, vetor[tam], j;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    
    for(i = 0; i < tam && num > 1; i = i + 1){
        vetor[i] = num;
        if(num % 2 == 0){
            num = num / 2;
        }
        else{
            num = (num * 3) + 1;
        }
    }
    vetor[i] = 1;
    i = i + 1;

    for(j = 0; j < i; j = j + 1){
        printf("%d ", vetor[j]);
    }
}