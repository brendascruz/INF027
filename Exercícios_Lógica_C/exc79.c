#include <stdio.h>
#define TAM_STR 256

int main(){
    char string[TAM_STR], subString[TAM_STR];
    int i, inicio, fim, j = 0;

    printf("Digite a string: ");
    fgets(string, TAM_STR, stdin);
    printf("Digite a posicao inicial da substring: ");
    scanf("%d", &inicio);
    printf("Digite a posicao final da substring: ");
    scanf("%d", &fim);

    for(i = inicio ; i <= fim; i = i + 1){
        subString[j] = string[i];
        j = j + 1;
    }
    subString[j] = '\0';
    puts(subString);
}
