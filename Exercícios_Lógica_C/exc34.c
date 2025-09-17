#include <stdio.h>

int main()
{
    float renda_mensal, valor_empr, n_prest, valor_prest;
    printf("Digite o valor da renda mensal do solicitante: ");
    scanf("%f", &renda_mensal);
    printf("Digite o valor total do emprestimo solicitado: ");
    scanf("%f", &valor_empr);
    printf("Digite o numero de prestacoes: ");
    scanf("%f", &n_prest);
    valor_prest = valor_empr / n_prest;
    //o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante
    if (valor_empr <= 10 * renda_mensal)
    {
        
        //o valor da prestação deve ser no máximo 30% da renda mensal do solicitante.
        if (valor_prest > 0.3 * renda_mensal)
        {
            printf("O valor das prestacoes deve ser no maximo 30% da renda mensal, o emprestimo nao pode ser consedido.");
        }
        else 
        {
            printf("O emprestimo pode ser consedido, com parcelas de %.2f.", valor_prest);
        }
    }
    else
    {
        printf("O emprestimo nao pode ser consedido pois o valor eh maior que dez vezes a renda mensal.");
    }
}