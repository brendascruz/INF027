#include <stdio.h>

int main()
{
    float A, B, probE, probOU;
    printf("Digite a probabilidade de o evento A acontecer(em %): ");
    scanf("%f", &A);
    printf("Digite a probabilidade de o evento B acontecer(em %): ");
    scanf("%f", &B);
    A = A / 100.0;
    B = B / 100.0;
    probE = (A * B);
    probOU = A + B - probE;
    printf("A probabilidade dos dois acontecerem eh de %.2f%%.\n", probE * 100);
    printf("A probabilidade de um dos dois acontecerem eh de %.2f%%.", probOU * 100);
}