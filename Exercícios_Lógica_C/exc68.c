// Escreva um programa que leia o índice pluviométrico de cada dia do 
//mês de junho e informe o dia que mais choveu, o dia que menos choveu e as 
//médias pluviométricas de cada uma das duas quinzenas.

#include <stdio.h>

int main(){
    int junho[30] = {1,5,9,13,17,21,25,29,33,37,41,45,49,53,57,61,65,69,73,77,81,85,89,93,97,101,105,109,113,117};
    int mais = 0, menos = 0, i, diaMais, diaMenos;
    double media1 = 0.0, media2 = 0.0;

    diaMais = 0;
    diaMenos = 0;

    for(i = 1; i < 30; i = i + 1){
        if(junho[i] > mais){
            diaMais = i;
        }
        if(junho[i] < menos){
            diaMenos = i;
        }
    }

    for(i = 0; i < 15; i = i + 1){
        media1 = media1 + junho[i];
    }

    for(i = 15; i < 30; i = i + 1){
        media2 = media2 + junho[i];
    }
    media1 = media1 / 15.0;
    media2 = media2 / 15.0;

    printf("O dia que mais choveu foi o dia %d.\n", diaMais + 1);
    printf("O dia que menos choveu foi o dia %d.\n", diaMenos + 1);
    printf("A media pluviometrica da primeira quinzena vale %.2lf.\n", media1);
    printf("A media pluviometrica da segunda quinzena vale %.2lf.\n", media2);

}