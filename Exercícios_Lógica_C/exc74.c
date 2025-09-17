#include <stdio.h>
#define MAX 30

int main() {
    int vetor[MAX];
    int tamanho = 0;
    int opcao, valor, pos, i, j;
    
    do {
        printf("\nMENU DE OPERACOES:\n");
        printf("1. Inserir elemento no final\n");
        printf("2. Inserir elemento em posicao especifica\n");
        printf("3. Remover elemento de posicao especifica\n");
        printf("4. Remover todos elementos com valor especifico\n");
        printf("5. Gerar novo array sem duplicidades\n");
        printf("6. Mostrar vetor atual\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1: // Inserir no final
                if (tamanho >= MAX) {
                    printf("Vetor cheio!\n");
                    break;
                }
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                vetor[tamanho++] = valor;
                printf("Elemento %d inserido no final.\n", valor);
                break;
                
            case 2: // Inserir em posição específica
                if (tamanho >= MAX) {
                    printf("Vetor cheio!\n");
                    break;
                }
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                printf("Digite a posicao (0 a %d): ", tamanho);
                scanf("%d", &pos);
                
                if (pos < 0 || pos > tamanho) {
                    printf("Posicao invalida!\n");
                    break;
                }
                
                for (i = tamanho; i > pos; i--) {
                    vetor[i] = vetor[i-1];
                }
                vetor[pos] = valor;
                tamanho++;
                printf("Elemento %d inserido na posicao %d.\n", valor, pos);
                break;
                
            case 3: // Remover de posição específica
                if (tamanho == 0) {
                    printf("Vetor vazio!\n");
                    break;
                }
                
                printf("Digite a posicao a remover (0 a %d): ", tamanho-1);
                scanf("%d", &pos);
                
                if (pos < 0 || pos >= tamanho) {
                    printf("Posicao invalida!\n");
                    break;
                }
                
                valor = vetor[pos];
                for (i = pos; i < tamanho-1; i++) {
                    vetor[i] = vetor[i+1];
                }
                tamanho--;
                printf("Elemento %d removido da posicao %d.\n", valor, pos);
                break;
                
            case 4: // Remover todos com valor específico
                if (tamanho == 0) {
                    printf("Vetor vazio!\n");
                    break;
                }
                
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                
                int removidos = 0;
                for (i = 0; i < tamanho; i++) {
                    if (vetor[i] == valor) {
                        for (j = i; j < tamanho-1; j++) {
                            vetor[j] = vetor[j+1];
                        }
                        tamanho--;
                        removidos++;
                        i--; // Reavaliar a mesma posição
                    }
                }
                printf("%d elementos com valor %d removidos.\n", removidos, valor);
                break;
                
            case 5: // Gerar array sem duplicidades
                if (tamanho == 0) {
                    printf("Vetor vazio!\n");
                    break;
                }
                
                int unicos[MAX];
                int tamanhoUnicos = 0;
                
                for (i = 0; i < tamanho; i++) {
                    int duplicado = 0;
                    for (j = 0; j < tamanhoUnicos; j++) {
                        if (vetor[i] == unicos[j]) {
                            duplicado = 1;
                            break;
                        }
                    }
                    if (!duplicado) {
                        unicos[tamanhoUnicos++] = vetor[i];
                    }
                }
                
                printf("Array sem duplicidades:\n[");
                for (i = 0; i < tamanhoUnicos; i++) {
                    printf("%d", unicos[i]);
                    if (i < tamanhoUnicos-1) printf(", ");
                }
                printf("]\n");
                break;
                
            case 6: // Mostrar vetor atual
                if (tamanho == 0) {
                    printf("Vetor vazio!\n");
                    break;
                }
                
                printf("Vetor atual (%d elementos):\n[", tamanho);
                for (i = 0; i < tamanho; i++) {
                    printf("%d", vetor[i]);
                    if (i < tamanho-1) printf(", ");
                }
                printf("]\n");
                break;
                
            case 0:
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    
    return 0;
}