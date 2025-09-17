#include <stdio.h>

int main() 
{
    float distancia, velocidade, aceleracao, margem = 3.0;
    float t1, d1, d2, t2, t_total, t_semaforo;

    printf("Digite a distancia entre os semaforos (em metros): ");
    scanf("%f", &distancia);
    printf("Digite a velocidade permitida na via (em quilometros por hora): ");
    scanf("%f", &velocidade);
    velocidade = velocidade / 3.6;
    printf("Digite a aceleracao tipica dos carros (em metros por segundo ao quadrado): ");
    scanf("%f", &aceleracao);

    t1 = velocidade / aceleracao;
    d1 = (velocidade * velocidade) / (2 * aceleracao);
    d2 = distancia - d1;
    t2 = d2 / velocidade;
    t_total = t1 + t2;
    t_semaforo = t_total - margem;
    
    printf("O proximo semaforo deve abrir %.2f segundos apos o atual.\n", t_semaforo);
}
