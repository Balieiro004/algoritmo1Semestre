#include<stdio.h>

int main(){
    float sal_base, imposto, gratificacao, sal_liq;
    int tempo_servico;
    char categoria;

    printf("Informe Salario Base: R$ ");
    scanf("%f%*c", &sal_base);
    printf("Tempo de servico em anos: ");
    scanf("%d%*c", &tempo_servico);

    if(sal_base < 200){
        imposto = 0;
    }else
        if(sal_base >= 200 && sal_base <= 450){
            imposto = sal_base * 0.03;
        }else
            if(sal_base > 450 && sal_base < 700){
                imposto = sal_base * 0.08;
            }else{
                imposto = sal_base * 0.12;
            }
    if(sal_base > 500 && tempo_servico <= 3){
        gratificacao = 20;
    }else
        if(sal_base > 500 && tempo_servico > 3){
            gratificacao = 30;
        }else
            if(sal_base <= 500 && tempo_servico <= 3){
                gratificacao = 23;
            }else
                if(sal_base <= 500 && tempo_servico > 3 && tempo_servico < 6){
                    gratificacao = 35;
                }else{
                    gratificacao = 33;
                }

    sal_liq = sal_base - imposto + gratificacao;


    if(sal_liq <= 350){
        categoria = 'A';
    }else
        if(sal_liq > 350 && sal_liq < 600){
            categoria = 'B';
        }else{
            categoria = 'C';
        }

    printf("************************************");
    printf("\nImposto: \t\tR$ %.2f", imposto);
    printf("\nGratificacao: \t\tR$ %.2f", gratificacao);
    printf("\nSalario Liquido: \tR$ %.2f", sal_liq);
    printf("\nCategoria: \t\t%c", categoria);
    printf("\n************************************");
    getchar();
    return 0;
}
