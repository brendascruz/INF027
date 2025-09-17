
#include <stdio.h>
#define N 3

int main(){
    int matriz[N][N];
    int i, j, somaAtual = 0, magico = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Posicao [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(j = 0; j < N; j = j + 1){
        magico = magico + matriz[0][j];
    }

    for(i = 1; i < N; i = i + 1){
        somaAtual = 0;
        for(j = 0; j < N; j = j + 1){
            somaAtual = somaAtual + matriz[i][j];
        }
        if(somaAtual != magico){
            printf("0\n");
            return 0;
        }
    }
    for(j = 0; j < N; j = j + 1){
        somaAtual = 0;
        for(i = 0; i < N; i = i + 1){
            somaAtual = somaAtual + matriz[i][j];
        }
        if(somaAtual != magico){
            printf("0\n");
            return 0;
        }
    }
    somaAtual = 0;
    for(i = 0; i < N; i = i + 1){
        somaAtual = somaAtual + matriz[i][i];
    }
    if(somaAtual != magico){
    printf("0\n");
    return 0;
}

    printf("%d\n", magico);

}

