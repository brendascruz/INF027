#include <stdio.h>
int main()
{
    int num, c, d, u;
    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &num);
    
    c = num / 100;
    d = (num/10) % 10;
    u = num % 10;
    
    //centena
    if (c > 0)
    {
        printf("cem");
    }
    
    //dezena
    
    switch (d) {
        case(1): switch (u) {
            case(0): printf("dez"); break;
            case(1): printf("onze"); break;
            case(2): printf("doze"); break;
            case(3): printf("treze"); break;
            case(4): printf("quatorze"); break;
            case(5): printf("quinze"); break;
            case(6): printf("dezesseis"); break;
            case(7): printf("dezessete"); break;
            case(8): printf("dezoito"); break;
            case(9): printf("dezenove"); break;
        
        } break;
        case(2): printf("vinte"); break;
        case(3): printf("trinta"); break;
        case(4): printf("quarenta"); break;
        case(5): printf("cinquenta"); break;
        case(6): printf("sessenta"); break;
        case(7): printf("setenta"); break;
        case(8): printf("oitenta"); break;
        case(9): printf("noventa"); break;
    }
    
    //unidade
    
    if (c == 0 && d > 1 && u > 0)
    {
        printf(" e ");
    }
    
    if( d != 1)
    {
        switch (u) {
            case(1): printf("um"); break;
            case(2): printf("dois"); break;
            case(3): printf("tres"); break;
            case(4): printf("quatro"); break;
            case(5): printf("cinco"); break;
            case(6): printf("seis"); break;
            case(7): printf("sete"); break;
            case(8): printf("oito"); break;
            case(9): printf("nove"); break;
            
        }
    }
    
}