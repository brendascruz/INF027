#include <stdio.h>

int main(){
    int vetor[10],i, inicio, fim, meio, num, pos = -1;

    printf("Digite 10 numeros inteiros ordenados:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite o numero a ser buscado: ");
    scanf("%d", &num);

    inicio = 0;
    fim = 9;

    for(i = 0; i < 10 && inicio <= fim; i = i + 1){
        meio = (inicio + fim) / 2;

        if(vetor[meio] == num){
            pos = meio;
            fim = meio - 1;
        }
        else if(num < vetor[meio]){
            fim = meio - 1;   
        }
        else{
            inicio = meio + 1; 
        }
    }

    if(pos != -1){
        printf("O numero foi encontrado na posicao %d.\n", pos);
    }
    else{
        printf("-1\n");
    }
}