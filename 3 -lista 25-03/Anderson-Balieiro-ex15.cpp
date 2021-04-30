#include<stdio.h>

int main(){
    float sal_min, horas_tra, hora_extra, vlHora_extra, sal_bruto, vl_hrTrabalhada, sal_mes, vl_dependentes, irrf, sal_liquido, gratificacao, sal_rec;
    int cont, dependentes;

    printf("Salario Minimo: R$ ");
    scanf("%f%*c", &sal_min);
    printf("Horas Trabalhada: ");
    scanf("%f%*c", &horas_tra);
    printf("Numero de dependentes: ");
    scanf("%d%*c", &dependentes);
    printf("Hora extra: ");
    scanf("%f%*c", &hora_extra);

    vl_hrTrabalhada = sal_min / 5;
    sal_mes = horas_tra * vl_hrTrabalhada;

    vl_dependentes = 0;
    for (cont = 1; cont <= dependentes; cont++){
        vl_dependentes = vl_dependentes + 32;

    }

    vlHora_extra = hora_extra *(vl_hrTrabalhada * 1.5);
    sal_bruto = sal_mes + vl_dependentes + vlHora_extra;

    if(sal_bruto < 200){
        irrf = sal_bruto * 0;
    }else
        if(sal_bruto >= 200 && sal_bruto < 500){
            irrf = sal_bruto * 0.1;
        }else{
            irrf = sal_bruto * 0.2;
        }

    sal_liquido = sal_bruto - irrf;

    if(sal_liquido < 350){
        gratificacao = 100;
    }else{
        gratificacao = 50;
    }
    sal_rec = sal_liquido + gratificacao;

    printf("=======================================\n");
    printf("Salario Receber: R$ %.2f", sal_rec);
    getchar();
    return 0;
}
