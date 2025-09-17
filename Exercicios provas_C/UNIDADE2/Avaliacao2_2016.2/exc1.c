#include <stdio.h>

int main(){
    int num, prox;
    int primo = 1;
    int i, fator1, fator2;
    int Pprimo = 1, subprimo = 0;

    printf("Digite o numero a ser testado: ");
    scanf("%d", &num);

    if(num <= 1){
        primo = 0;
    }
    else{
        for(i = 2; i * i <= num; i = i + 1){
            if(num % i == 0){
                primo = 0;
            }
        }
    }

    if(primo == 1){
        prox = num + 2;

        if(prox <= 1){
        Pprimo = 0;
        }
        else{
            for(i = 2; i < prox / 2; i = i + 1){
                if(prox % i == 0){
                 Pprimo = 0;
                }
            }
        }
    
        if(Pprimo == 0){
            for (i = 2; i * i <= prox; i++) {
                 if (prox % i == 0){
                        fator1 = i;
                        fator2 = prox / i;

                        int fat1Primo = 1;
                        int fat2Primo = 1;

                        if(fator1 <= 1){
                        fat1Primo = 0;
                        }
                        else{
                            for(int j = 2; j < fator1 / 2;  j = j + 1){
                                if(fator1 % j == 0){
                                 fat1Primo = 0;
                                }
                            }
                        }

                        if(fator2 <= 1){
                            fat2Primo = 0;
                        }
                        else{
                            for(int j = 2; j < fator2 / 2;  j = j + 1){
                                if(fator2 % j == 0){
                                    fat2Primo = 0;
                                }
                            }
                        }

                        if(fat1Primo == 1 && fat2Primo == 1){
                        subprimo = 1;
                        }
                    }
            }
        }
        if(Pprimo == 1 || subprimo == 1){
            printf("%d eh um primo de Chen.\n", num);
        }
        else{
            printf("%d nao eh um primo de chen.", num);
        }
    }
    else{
        printf("%d nao eh um numero de chen, pois nao eh um numero primo.", num);
    }
}