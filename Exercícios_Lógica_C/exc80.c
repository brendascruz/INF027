#include <stdio.h>

int main(){
    char string1[30], string2[30];
    int i, achou, tam, cont, ocorrencia;

    printf("Digite a primeira string: ");
    fgets(string1, 30, stdin);
    printf("Digite a segunda string: ");
    fgets(string2, 30, stdin);
    
    for(tam = 0; string2[tam] != '\0' && string2[tam] != '\n'; tam = tam + 1);

    for(i = 0, achou = 0; string1[i] && achou == 0; i = i + 1){
        for(cont = 0, ocorrencia = 0; cont < tam; cont = cont + 1){
            if(string1[i + cont] == string2[cont]){
                ocorrencia++;
            }
        }
        if(ocorrencia == tam){
            printf("A primeira string contem a segunda string.\n");
            achou = 1;
        }
    }
    if(achou == 0){
        printf("A primeira string nao contem a segunda.\n");
    }
    puts(string1);
    puts(string2);
}