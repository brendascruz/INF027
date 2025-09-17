#include <stdio.h>

int main() {
    int A, B, i, num, d;
    int cont[10] = {0}; 

    printf("Digite os valores de A e B: ");
    scanf("%d %d", &A, &B);

    for (i = A; i <= B; i++) {
        num = i;
        while (num > 0) {
            d = num % 10;  
            cont[d]++;     
            num = num / 10; 
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", cont[i]);
    }
    printf("\n");
}
