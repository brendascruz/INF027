// verifique se uma string normalizada é palíndrome
#include <stdio.h>

int main(){
    char string[256];
    int i = 0, j = 0, tam = 0, palindrome = 1;

    printf("Digite uma string normalizada: ");
    fgets(string, 256, stdin);

    while(string[tam] != '\0' && string[tam] != '\n'){
        tam = tam + 1;
    }
    j = tam - 1;
    for(i = 0; i < tam; i = i + 1){
        if(string[i] != string[j]){
            palindrome = 0;
            break;
        }
        j = j - 1;
    }   
    if(palindrome == 1){
        printf("A string eh palindrome.");
    }
    else{
        printf("A string nao eh palindrome.");
    }
}