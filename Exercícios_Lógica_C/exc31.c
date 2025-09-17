#include <stdio.h>

int main()
{
    float passecom, passeten, jardapas, pas_touchdown, passeint, parcela1, parcela2, parcela3, parcela4, qua_rating;
    
    printf("Digite o numero de passes tentados: ");
    scanf("%f", &passeten);
    printf("Digite o numero de passes completos: ");
    scanf("%f", &passecom);
    printf("Digite o numero de jardas passadas: ");
    scanf("%f", &jardapas);
    printf("Digite o numero de passes para touchdown: ");
    scanf("%f", &pas_touchdown);
    printf("Digite o numero de passes interceptados: ");
    scanf("%f", &passeint);
    
    parcela1 = ((passecom / passeten) - 0.3) / 0.2;
    if (parcela1 < 0)
    {
        parcela1 = 0;
    }
    else if (parcela1 > 2.375)
    {
        parcela1 = 2.375;
    }
    
    parcela2 = ((jardapas / passeten) - 3.0) / 4.0;
    if (parcela2 < 0)
    {
        parcela2 = 0;
    }
    else if (parcela2 > 2.375)
    {
        parcela2 = 2.375;
    }
    
    parcela3 = (pas_touchdown / passeten) / 0.05;
    if (parcela3 < 0)
    {
        parcela3 = 0;
    }
    else if (parcela3 > 2.375)
    {
        parcela3 = 2.375;
    }
    
    parcela4 = (0.095 - (passeint / passeten) ) / 0.04;
    if (parcela4 < 0)
    {
        parcela4 = 0;
    }
    else if (parcela4 > 2.375)
    {
        parcela4 = 2.375;
    }
    
    qua_rating = ((parcela1 + parcela2 + parcela3 + parcela4) * 100) / 6;
    
    printf("O Quaterbeck Rating desse jogador vale %f", qua_rating); 
}