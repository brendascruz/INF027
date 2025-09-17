#include <stdio.h>

int main(){
    int k, i, soma, num = 1, encontrados = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &k);

    while(encontrados < k){
        soma = 0;
        
        for(i = 1; i <= num; i = i + 1){
            if(num % i == 0){
                soma = soma + i;
            }
        }

        if(soma > 2 * num){
            printf("%d ", num);
            encontrados = encontrados + 1;
        }
        
        num = num + 1;
    }
    
}


