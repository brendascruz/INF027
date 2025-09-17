/* LER A STRING
TRANSFORMAR TODAS AS LETRAS EM MAIUSCULAS
COMECAR COM A LETRA A 
PROCURAR A LETRA A NA STRING
SE ENCONTRAR, PRINTAR A LETRA E A POSICAO
MUDAR PARA A LETRA B
SE NAO ENCONTRAR PASSAR PARA A PROXIMA LETRA
*/

#include <stdio.h>

int main(){
    char string[256];
    int i, j, letra;

    printf("DIGITE A STRING: ");
    fgets(string, 256, stdin);

    for(i = 0; string[i] != '\n' && string[i] != '\0'; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] = string[i] - 32;
        }
    }
    for(j = 0; j < 26; j = j + 1){
        for(i = 0; string[i] != '\n' && string[i] != '\0'; i++){
            letra = 'A' + j;
            if(string[i] == letra){
                printf("%c (%d) ", letra, i);
                break;
            }
        }
    }
}