#include<stdio.h>

int main(void){
    int nHorasTrab, hTrabalhada;
    float salario_min, salario_rec, salario_bruto, imposto;

    printf("Horas trabalhada: ");
    scanf("%d%*c", &nHorasTrab);
    printf("Valor do salario minino: R$ ");
    scanf("%f%*c", &salario_min);

    hTrabalhada = salario_min / 2;
    salario_bruto = nHorasTrab * hTrabalhada;
    imposto = salario_bruto * 3/100;
    salario_rec = salario_bruto - imposto;

    printf("Horas trabalhada: %.2d", hTrabalhada);
    printf("\nSalario Bruto: %.2f", salario_bruto);
    printf("\nImposto: R$ %.2f", imposto);
    printf("\nSalario Receber: R$ %.2f", salario_rec);


    getchar();
    return 0;
}
