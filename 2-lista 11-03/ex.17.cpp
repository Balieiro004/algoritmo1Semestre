#include<stdio.h>
#define cpmf 0.38

int main(void){
    float vl_deposito, vl_saque, vl_saque2, saldo, juros, juros1;

    printf("Valor para deposito: ");
    scanf("%f*%c", &vl_deposito);

    printf("Valor do saque: R$ ");
    scanf("%f*%c", &vl_saque);
    printf("Valor do saque02: ");
    scanf("%f*%c", &vl_saque2);

    juros = vl_saque * cpmf/100;
    juros1 = vl_saque2 * cpmf/100;

    saldo = vl_deposito - (vl_saque+juros+vl_saque2+juros1);

    printf("Saldo: R$ %.2f", saldo);

    getchar();
    return 0;
}
