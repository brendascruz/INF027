#include <stdio.h>

int main(){
    char string[256];
    int i, decimal = 0, tam = 0, digito, base = 1;

    printf("Digite a string: ");
    fgets(string, 256, stdin);

    while(string[tam] != '\0' && string[tam] != '\n'){
        tam = tam + 1;
    }
    for(i = tam - 1; i >= 0; i = i - 1){
        if(string[i] >= '0' && string[i] <= '9'){
            digito = string[i] - '0';
        } 
        else if(string[i] >= 'A' && string[i] <= 'F'){
            digito = string[i] - 'A' + 10;
        }
        else if(string[i] >= 'a' && string[i] <= 'f'){
            digito = string[i] - 'a' + 10;
        }
        decimal = decimal + digito * base;
        base = base * 16;
    }

    printf("Valor decimal: %d.", decimal);
}