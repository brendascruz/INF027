#include <stdio.h>

int main(){
    char string[256], novaString[256];
    int i, tam = 0, j;

    printf("Digite a string a ser invertida: ");
    fgets(string, 256, stdin);

    while(string[tam] != '\0' && string[tam] != '\n'){
        tam = tam + 1;
    }
    
    for(i = 0, j = tam; i < tam; i = i + 1){
        j = j - 1;
        novaString[i] = string[j];
    }
    novaString[tam] = '\0';
    puts(novaString);
}