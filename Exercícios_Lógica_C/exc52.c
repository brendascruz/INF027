#include <stdio.h>

int main(){
    int N, i, termo1, termo2, termoAtual;

    printf("Digite o numero de termos da serie: ");
    scanf("%d", &N);

    if (N < 3){
        printf("A serie precisa de pelo menos tres termos.\n");
    }
    else{
        
        printf("Digite o primeiro termo: ");
        scanf("%d", &termo1);
        printf("Digite o segundo termo: ");
        scanf("%d", &termo2);

        printf("Serie de Fetuttine: \n");
        printf("%d ", termo1);
        printf("%d ", termo2);
        
        for(i = 3; i <= N; i = i + 1){
            if(i % 2 == 1){
                termoAtual = termo2 + termo1;
            }
            else{
                termoAtual = termo2 - termo1;
            }

            printf("%d ", termoAtual);

            termo1 = termo2;
            termo2 = termoAtual;
        }
    }

}