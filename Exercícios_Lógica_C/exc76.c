#include <stdio.h>

int main(){
    char string[40];
    int cont = 0, i;

    printf("Digite a string a ser testada: ");
    fgets(string, 40, stdin);
    for(i = 0; string[i] != '\0'; i = i + 1){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
           string[i] == 'o' || string[i] == 'u' ||
           string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
           string[i] == 'O' || string[i] == 'U') {
            cont++;
        }
    }
    printf("A string %s contem %d vogais.", string, cont);
}