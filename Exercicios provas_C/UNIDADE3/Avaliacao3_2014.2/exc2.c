#include <stdio.h>

int main(){
    char string[256];
    int i = 0, encontro = 0 , seguidas;


    printf("Digite a string: ");
    fgets(string, 256, stdin);

    while(string[i] != '\n'){
        int c = string[i];
    
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){

            if(!(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
            || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){
                seguidas = seguidas + 1;
            }
            else{
                if(seguidas >= 2){
                    encontro = encontro + 1;
                }
                seguidas = 0;
            }
        }
        else{
            if(seguidas >= 2){
                encontro = encontro + 1;
            }
            seguidas = 0;
        }
        i = i + 1;
    }
    if (seguidas >= 2) {
        encontro = encontro + 1;
    }

    printf("O numero de encontros eh: %d", encontro);
}

