//Escreva um programa em C, que leia a probabilidade de dois eventos independentes acontecerem. Em seguida, o programa deverá calcular e imprimir a probabilidade de um dos dois eventos ocorrer, 
//bem como dos dois eventos ocorrerem. A probabilidade é dada pelas fórmulas abaixo: P (A e B) = P(A) x P(B) 
//P(A ou B) = P(A) + P (B) – P(A e B)

#include <stdio.h>

int main()
{
    float pA, pB, pAeB, pAouB;
    printf("Digite a probabilidade do primeiro evento(em um numero entre 0 e 1): ");
    scanf("%f", &pA);
    printf("Digite a probabilidade do segundo evento(em um numero entre 0 e 1): ");
    scanf("%f", &pB);
    pAeB = pA * pB;
    pAouB = pA + pB - pAeB;
    printf("A probabilidade dos dois eventos ocorrerem eh de %.2f.\n", pAeB);
    printf("A probabilidade de pelo menos um dos eventos ocorrer eh de %.2f.", pAouB);
}