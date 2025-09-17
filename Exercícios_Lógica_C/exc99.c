#include <stdio.h>

int main() {
    int homem, mulher;
    int frequencia[13][13] = {0};
    int freqHomem[13] = {0};
    int freqMulher[13] = {0};
    
    while (1) {
        printf("Digite a idade do homem (18-30): ");
        scanf("%d", &homem);
        printf("Digite a idade da mulher (18-30): ");
        scanf("%d", &mulher);

        if (homem < 18 || homem > 30 || mulher < 18 || mulher > 30) {
            break; 
        }

        int i = homem - 18;
        int j = mulher - 18;

        frequencia[i][j]++;
        freqHomem[i]++;
        freqMulher[j]++;
    }

    int maxH = 0, idadeH = 18;
    for (int i = 0; i < 13; i++) {
        if (freqHomem[i] > maxH) {
            maxH = freqHomem[i];
            idadeH = i + 18;
        }
    }

    int maxM = 0, idadeM = 18;
    for (int j = 0; j < 13; j++) {
        if (freqMulher[j] > maxM) {
            maxM = freqMulher[j];
            idadeM = j + 18;
        }
    }

    int maxComb = 0, idadeHComb = 18, idadeMComb = 18;
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 13; j++) {
            if (frequencia[i][j] > maxComb) {
                maxComb = frequencia[i][j];
                idadeHComb = i + 18;
                idadeMComb = j + 18;
            }
        }
    }

    printf("\n(1) Idade mais frequente dos homens: %d anos\n", idadeH);
    printf("(2) Idade mais frequente das mulheres: %d anos\n", idadeM);
    printf("(3) Combinacao mais frequente: Homem %d anos e Mulher %d anos\n", idadeHComb, idadeMComb);

}
