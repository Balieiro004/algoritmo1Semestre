#include<stdio.h>

int main(void){
    float preco_fabr, perc_lucro, perc_imposto, lucro_dist, imposto, preco_final;

    printf("Valor de fabrica: ");
    scanf("%f*%c", &preco_fabr);
    printf("Percentual de lucro do distruibuidor: ");
    scanf("%f*%c", &perc_lucro);
    printf("Imposto aplicado: ");
    scanf("%f*%c", &perc_imposto);

    lucro_dist = preco_fabr * perc_lucro/100;
    imposto = preco_fabr * perc_imposto/100;
    preco_final = lucro_dist + imposto + preco_fabr;

    printf("Lucro do distruibuidor: R$ %.2f", lucro_dist);
    printf("\nValor dos impostos: R$ %.2f", imposto);
    printf("\nValor final: R$ %.2f", preco_final);


    getchar();
    return 0;
}
