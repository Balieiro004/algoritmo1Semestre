#include<stdio.h>

int main(){
    float custo_tot, convite, vendas;
    int min_convite;

    printf("Informe o custo total do espetaculo: R$ ");
    scanf("%f%*c", &custo_tot);
    printf("Informe o preco do convite: R$ ");
    scanf("%f%*c", &convite);
    min_convite = custo_tot / convite;
    printf("Eh preciso vender %d convite no minino", min_convite);
    getchar();
    return 0;
}
