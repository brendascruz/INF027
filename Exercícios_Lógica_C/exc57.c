#include <stdio.h>

int main(){
    int n, i, cont;
    double s = 0.0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i = i + 1){
        double potencia = 1.0;

        for(cont = 1; cont <= i; cont = cont + 1){
            potencia = potencia * i;
        }

        s = s + (1 / potencia);
    }

    printf("O valor de S para N = %d eh: %lf\n", n, s);
}
