#include <stdio.h>

int main(){
    
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, num, i, achou, pos;

    achou = 0;
    printf("Digite o numero procurado: ");
    scanf("%d", &num);

    for(i = 0; i < 10 && achou == 0; i = i + 1){
        if(vetor[i] == num){
            pos = i;
            achou = achou + 1;
        }
    }
    if(achou != 0){
        printf("Numero encontrado na %d posicao.\n", pos);
    }
    else{
        printf("Numero nao encontrado.");
    }
}