#include <stdio.h>

int main(){
    int num, div, soma = 0;

    printf("Digite o numero a ser testado: ");
    scanf("%d", &num);

    for(div = 1; div < num; div = div + 1){
        if(num % div == 0){
            soma = soma + div;
        }
    }
    if (soma == num){
        printf("Esse numero eh perfeito.");
    }
    else{
        printf("Esse numero nao eh perfeito.");
    }
}