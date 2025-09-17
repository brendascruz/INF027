#include <stdio.h>

int main() {
    char nome[100];
    char resultado[100];
    int i = 0, j = 0;
    int comecoUltimo = 0, tam = 0;

    printf("Digite o nome completo: ");
    fgets(nome, 100, stdin);

    while (nome[tam] != '\0') {
        if (nome[tam] == '\n') {
            nome[tam] = '\0';
            break;
        }
        tam++;
    }

    for (i = tam - 1; i >= 0; i--) {
        if (nome[i] == ' ') {
            comecoUltimo = i + 1;
            break;
        }
    }

    i = comecoUltimo;
    while (nome[i] != '\0') {
        resultado[j] = nome[i];
        i++;
        j++;
    }

    resultado[j++] = ',';
    resultado[j++] = ' ';

    i = 0;
    if (nome[i] != ' ') {
        resultado[j++] = nome[i];
        resultado[j++] = '.';
        resultado[j++] = ' ';
    }

    while (nome[i] != '\0') {
        if (nome[i] == ' ' && nome[i + 1] != ' ' && nome[i + 1] != '\0') {
            if (i + 1 != comecoUltimo) { 
                resultado[j++] = nome[i + 1];
                resultado[j++] = '.';
                resultado[j++] = ' ';
            }
        }
        i++;
    }

    if (resultado[j - 1] == ' ') {
        j--;
    }

    resultado[j] = '\0';
    printf("Resultado: %s\n", resultado);

}
