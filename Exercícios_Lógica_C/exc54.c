#include <stdio.h>

int main(){
    int num, termo, produto, ehTriangular = 0;

    printf("Digite o numero: ");
    scanf("%d", &num);

    for(termo = 1; termo < num; termo = termo + 1)
    {
        produto = termo * (termo + 1) * (termo + 2);
        if(produto == num){
            ehTriangular = 1;
            break;
        }
        else if (produto > num){
            break;
        }
    }

    if(ehTriangular){
        printf("O numero %d eh triangular.", num);
    }
    else{
        printf("O numero %d nao eh triangular.", num);
    }
}