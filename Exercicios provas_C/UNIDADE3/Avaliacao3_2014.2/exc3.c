
#include <stdio.h>

int main(){
    char nome[10][10];
    int i, indexMenor;
    float preco[10], media = 0.0, menor;

    for (i = 0; i < 10; i++) {
        printf("Produto %d\n", i + 1);

        printf("Nome: ");
        fgets(nome[i], 10, stdin);

        printf("Preco: ");
        scanf("%f", &preco[i]);

        getchar();
        media = media + preco[i];
    }
    media = media / 10.0;
    menor = preco[0];
    indexMenor = 0;
    for (i = 0; i < 10; i++){
        if(preco[i] < media){
            preco[i] = preco[i] * 1.10;
        }
        if(preco[i] < menor){
            menor = preco[i];
            indexMenor = i;
        }
    }

    printf("Produto mais barato apos a majoracao: \n");
    printf("Nome: %s\n", nome[indexMenor]);
    printf("Preco: %.2f\n", menor);
}

