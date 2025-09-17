#include <stdio.h>

int main(){
    char string[20], a;
    int cont = 0, i;

    printf("Digite a string: ");
    fgets(string, 20, stdin);
    printf("Digite o caracter: ");
    scanf("%c", &a);

    for(i = 0; string[i] != '\0'; i = i + 1){
        if(string[i] == a){
            cont = cont + 1;
        }
    }
    printf("A quantidade de vezes foi %d.", cont);
}