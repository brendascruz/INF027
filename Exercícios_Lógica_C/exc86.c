//Escreva um programa em C, que coloque a string lida toda em caixa alta. 

#include <stdio.h>

int main(){
    char string[256];
    int i;

    printf("Digite a string: ");
    fgets(string, 256, stdin);

    for(i = 0; string[i] != '\n' && string[i] != '\0'; i = i + 1){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] = string[i] - 32;
        }
    }
    for(i = 0; string[i] != '\n' && string[i] != '\0'; i = i + 1){
        printf("%c", string[i]);
    }
}