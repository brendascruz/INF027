#include <stdio.h>

int main() {
    int numA, numB, A1, A2, A3, B1, B2, B3, RA, RB;
    RA = 0;
    RB = 0;
    
    printf("Digite o numero A: ");
    scanf("%d", &numA);
    printf("Digite o numero B: ");
    scanf("%d", &numB);
    
    A1 = numA / 100;
    A2 = (numA / 10) % 10;
    A3 = numA % 10;
    B1 = numB / 100;
    B2 = (numB / 10) % 10;
    B3 = numB % 10;
    
    
    if (A1 >= B1) {
        RA = RA * 10 + A1;
    }
    if (B1 >= A1) {
        RB = RB * 10 + B1;
    }
    
    if (A2 >= B2) {
        RA = RA * 10 + A2;
    }
    if (B2 >= A2) {
        RB = RB * 10 + B2;
    }
    
    if (A3 >= B3) {
        RA = RA * 10 + A3;
    }
    if (B3 >= A3) {
        RB = RB * 10 + B3;
    }
    
    if (RA == 0) {
        RA = -1;
    }
    if (RB == 0) {
        RB = -1;
    }
    
    printf("A dupla resultado eh %d e %d.\n", RA, RB);
    return 0;
}
