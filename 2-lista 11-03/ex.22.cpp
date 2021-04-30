#include<stdio.h>

int main(){
    float sal_Min, quilowatts, vl_quilowatts, vl_pago, desconto;

    printf("Valor do Salário Minimo: ");
    scanf("%f%*c", &sal_Min);
    vl_quilowatts = sal_Min / 5;
    printf("Quilowatts consumido na residencia: ");
    scanf("%f%*c", &quilowatts);
    printf("Valor do Quilowatts: R$ %.2f", vl_quilowatts);
    vl_pago = vl_quilowatts * quilowatts;
    printf("\nValor para pagamento: R$ %.2f", vl_pago);
    desconto = vl_pago - (vl_pago * 15/100);
    printf("\nValor com 15 de desconto %.2f", desconto);
    getchar();
    return 0;
}
