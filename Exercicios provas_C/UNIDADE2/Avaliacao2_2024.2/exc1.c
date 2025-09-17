#include <stdio.h>
#define TAM 100

int main() {
    int num, sequencia[TAM], unidade, dezena, i, ciclo = 0, cont, tamAtual;
    
    printf("Digite o primeiro numero da sequencia (0-99): ");
    scanf("%d", &num);

    // Validação da entrada
    if(num < 0 || num >= 100) {
        printf("Numero invalido! Deve ser entre 0 e 99.\n");
        return 1;
    }

    for(i = 0; i < TAM && ciclo == 0; i++) {
        sequencia[i] = num;
        dezena = num / 10;
        unidade = num % 10;
        num = (dezena * dezena) + (unidade * unidade);
        num = (num >= 100) ? num / 2 : num;

        for(cont = 0; cont < i; cont++) {
            if(num == sequencia[cont]) {
                ciclo = 1;
                break;
            }
        }
    }

    tamAtual = i;
    printf("Sequencia gerada = [ ");
    for(i = 0; i < tamAtual; i++) {
        printf("%d", sequencia[i]);
        if(i < tamAtual - 1) printf(", ");
    }
    printf(" ]\n");

    if(ciclo) {
        printf("Ciclo encontrado com o numero %d\n", num);
    }

}