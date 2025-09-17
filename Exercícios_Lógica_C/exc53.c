#include <stdio.h>

int main(){
    int anos, taxaA = 5000000, taxaB = 7000000;
    for(anos = 0; taxaA <= taxaB; anos = anos + 1){
        taxaA = taxaA + (taxaA * 0.03);
        taxaB = taxaB + (taxaB * 0.02);
    }
    printf("Foram necessarios %d anos para a populacao do pais A ultrapasse a populacao do pais B.", anos);
}