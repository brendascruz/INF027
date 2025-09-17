#include <stdio.h>

int main()
{
    char caracter;
    printf("Digite um caracter: ");
    scanf("%c", &caracter);
    
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' ||
        caracter == 'o' || caracter == 'u' ||
        caracter == 'A' || caracter == 'E' || caracter == 'I' ||
        caracter == 'O' || caracter == 'U') {
        printf("Eh uma vogal.\n");
    }

    else if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
        printf("Eh uma consoante.\n");
    }

    else if (caracter >= '0' && caracter <= '9') {
        printf("Eh um numero.\n");
    }

    else {
        printf("Eh um simbolo ou caracter especial.\n");
    }
}
