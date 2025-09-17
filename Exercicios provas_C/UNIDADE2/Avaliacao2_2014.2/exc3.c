#include <stdio.h>

int main() {
    int num, i, numeroTriangular = 1;       
    float soma = 0.0; 

    printf("Digite a quantidade de termos (N): ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        soma = soma + 1.0 / numeroTriangular;
        numeroTriangular = numeroTriangular + (i + 1);
        
    }
    
    printf("Soma dos reciprocos triangulares = %.2f\n", soma);
}
