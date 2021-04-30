#include<stdio.h>

int main(){
    int cod_cargo;
    float sal_atual, vl_aumento, novo_sal;

    printf("Codigo do cargo: ");
    scanf("%d%*c", &cod_cargo);

    if(cod_cargo < 1 || cod_cargo > 5){
        printf("Por favor informe um codigo valido.");
        return 0;
    }

    printf("Salario Atual: R$ ");
    scanf("%f%*c", &sal_atual);


    if(cod_cargo == 1){
        vl_aumento = sal_atual * 0.5;
        printf("Cargo Escriturario.\n");
    }else{
        if(cod_cargo == 2){
            vl_aumento = sal_atual * 0.35;
            printf("Cargo Secretario\n");
        }else{
            if(cod_cargo == 3){
                vl_aumento = sal_atual * 0.2;
                printf("Cargo Caixa\n");
            }else{
                if(cod_cargo == 4){
                    vl_aumento = sal_atual * 0.1;
                    printf("Cargo Diretor\n");
                }else{
                    vl_aumento = 0;
                    printf("Cargo Diretor\n");
                }
            }
        }
    }

    novo_sal = sal_atual + vl_aumento;

    printf("*************************************");
    printf("\nValor do Aumento: \tR$ %.2f", vl_aumento);
    printf("\nNovo Salario: \t\tR$ %.2f", novo_sal);
    printf("\n*************************************");

    getchar();
    return 0;
}
