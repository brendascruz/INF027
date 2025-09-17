#include <stdio.h>

int main() {
    int soma;
    
    printf("Digite o valor da soma desejada (entre 2 e 12): ");
    scanf("%d", &soma);
    
    if(soma < 2 || soma > 12) {
        printf("Valor inválido! A soma deve estar entre 2 e 12.\n");
    }
    
    printf("Combinações possíveis para soma %d:\n", soma);
    
    for(int div = 6; div >= 1; div = div - 1) {
        int qtd = soma / div;
        
        if(qtd > 0 && (soma - div) >= 1 && (soma - div) <= 6) {
            printf("%d %d\n", div, soma - div);
        }
    }
}
