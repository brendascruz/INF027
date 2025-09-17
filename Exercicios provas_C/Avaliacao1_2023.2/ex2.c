#include <stdio.h>

int main()
{
    int ind, V, b0, b1, b2, b3, b4;
    printf("Digite o numero do individuo: ");
    scanf("%d", &ind);
    printf("Digite um valor de bit entre 0 e 4: ");
    scanf("%d", &V);
    b0 = ind % 2;
    b1 = (ind / 2) % 2;
    b2 = (ind / 4) % 2;
    b3 = (ind / 8) % 2;
    b4 = (ind / 16) %2;

    switch (V){
        case(0):
            if (b0 == 0){
                ind = ind + 1;
            }
            else if (b0 == 1){
                ind = ind - 1;
            } break;
        
        case(1):
            if (b1 == 0){
                ind = ind + 2;
            }
            else if (b1 == 1){
                ind = ind - 2;
            } break;
        
        case (2):
            if (b2 == 0){
                ind = ind + 4;
            }
            else if (b2 == 1){
                ind = ind - 4;
            } break;
    
        case (3):
            if (b3 == 0){
                ind = ind + 8;
            }
            else if (b3 == 1){
                ind = ind - 8;
            } break;
    
        case (4):
            if (b4 == 0){
                ind = ind + 16;
            }
            else if (b4 == 1){
                ind = ind - 16;
            } break;
    }
    printf("O novo numero vale %d.", ind);
}