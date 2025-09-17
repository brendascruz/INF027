#include <stdio.h>

int main() {
    int i, j, m, I, J; 

    printf("Digite os valores de i, j e m: ");
    scanf("%d %d %d", &i, &j, &m);

    for (I = 0; I <= i; I++) {
        for (J = 0; J <= j; J++) {
            if (I % m == J % m) {
                printf("i: %d e j: %d\n", I, J);
            }
        }
    }
}
