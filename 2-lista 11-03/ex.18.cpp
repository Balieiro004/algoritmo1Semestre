#include<stdio.h>

int main(void){
    int quilos, peso_saco_gramas, qnt_comida_porGato, tot_comida, tot_comidCinco, racao_final;

    printf("Quantos quilos tem o saco de racao? ");
    scanf("%d%*c", &quilos);
    peso_saco_gramas = quilos * 1000;
    printf("Quantidade de comida para cada gato em gramas: ");
    scanf("%d%*c", &qnt_comida_porGato);
    tot_comida = qnt_comida_porGato * 2;
    tot_comidCinco = tot_comida * 5;
    racao_final = peso_saco_gramas - tot_comidCinco;
    printf("Quantidade Final do saco: %d gramas", racao_final);
    getchar();
    return 0;
}
