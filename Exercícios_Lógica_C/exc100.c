#include <stdio.h>

int main() {
    int N;
    printf("Digite a ordem da matriz (N): ");
    scanf("%d", &N);

    int matriz[N][N];

    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        int freq[N+1]; 
        for (int k = 1; k <= N; k++) freq[k] = 0;

        for (int j = 0; j < N; j++) {
            int val = matriz[i][j];
            if (val < 1 || val > N) {
                printf("Nao e quadrado latino: valor invalido na linha %d\n", i+1);
                return 0;
            }
            freq[val]++;
        }

        for (int k = 1; k <= N; k++) {
            if (freq[k] != 1) {
                printf("Nao e quadrado latino: repeticao ou falta de numero na linha %d\n", i+1);
                return 0;
            }
        }
    }

    for (int j = 0; j < N; j++) {
        int freq[N+1];
        for (int k = 1; k <= N; k++) freq[k] = 0;

        for (int i = 0; i < N; i++) {
            int val = matriz[i][j];
            if (val < 1 || val > N) {
                printf("Nao e quadrado latino: valor invalido na coluna %d\n", j+1);
                return 0;
            }
            freq[val]++;
        }

        for (int k = 1; k <= N; k++) {
            if (freq[k] != 1) {
                printf("Nao e quadrado latino: repeticao ou falta de numero na coluna %d\n", j+1);
                return 0;
            }
        }
    }

    printf("A matriz e um Quadrado Latino de ordem %d.\n", N);
    return 0;
}
