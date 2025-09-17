#include <stdio.h>

int main() {
    char entrada[100], resultado[100];
    int i = 0, j = 0, k = 0;

    printf("Digite uma string: ");
    fgets(entrada, 100, stdin);

    while (entrada[i] != '\0') {
        if (entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' ||
            entrada[i] == 'o' || entrada[i] == 'u' ||
            entrada[i] == 'A' || entrada[i] == 'E' || entrada[i] == 'I' ||
            entrada[i] == 'O' || entrada[i] == 'U') {
            resultado[j] = entrada[i];
            j++;
        }
        i++;
    }

    i = 0;
    while (entrada[i] != '\0') {
        if ((entrada[i] >= 'a' && entrada[i] <= 'z') || (entrada[i] >= 'A' && entrada[i] <= 'Z')) {
            if (!(entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' ||
                  entrada[i] == 'o' || entrada[i] == 'u' ||
                  entrada[i] == 'A' || entrada[i] == 'E' || entrada[i] == 'I' ||
                  entrada[i] == 'O' || entrada[i] == 'U')) {
                resultado[j] = entrada[i];
                j++;
            }
        }
        i++;
    }

    resultado[j] = '\0'; 

    printf("Resultado: %s\n", resultado);

    return 0;
}
