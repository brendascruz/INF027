
#include <stdio.h>

int main(){
    char errada[256], corrigida[256], ca;
    int i, tam = 0, max = 0;

    printf("Digite a string a ser corrigida: ");
    fgets(errada, 256, stdin);

    while (errada[tam] != '\0' && errada[tam] != '\n') {
        tam++;
    }
    ca = errada[tam - 1];
    for(i = tam - 2; i >= 0; i = i - 1){
        if(errada[i] == ca){
            max = i + 1;
            break;
        }
    }
    for(int j = 0; j < max; j = j + 1){
        corrigida[j] = errada[j];
    }
    corrigida[max] = '\0';
    printf("Corrigida: %s.", corrigida);
}