#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, nota4, nota5;
    
    printf("Digite a nota do exame 1:");
    scanf("%d", &nota1);
    printf("Digite a nota do exame 2:");
    scanf("%d", &nota2);
    printf("Digite a nota do exame 3:");
    scanf("%d", &nota3);
    printf("Digite a nota do exame 4:");
    scanf("%d", &nota4);
    printf("Digite a nota do exame 5:");
    scanf("%d", &nota5);
    
    if (nota1 >= 70 && nota2 >=70 && nota3 >= 70 && nota4 >= 70 && nota5 >= 70)
    {
        printf("Classificacao: A – passou em todos os exames.");
    }
    else if (nota1 >= 70 && nota2 >=70 && nota4 >= 70 && nota3 < 70 && nota5 < 70)
    {
        printf("Classificacao: B -  passou em I, II e IV, mas não em III ou V.");
    }
    else if (nota1 >= 70 && nota2 >=70 && (nota3 >= 70 || nota4 >= 70) && nota5 < 70)
    {
        printf("Classificacao: C – passou em I e II, III ou IV, mas não em V.");
    }
    else
    {
        printf("Reprovado.");
    }
}