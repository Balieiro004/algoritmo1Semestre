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

    switch(cod_cargo){
        case 1 :
            vl_aumento = sal_atual * 0.5;
            printf("\nCargo Escriturario");
            break;
        case 2 :
            vl_aumento = sal_atual * 0.35;
            printf("\nCargo Secretario");
            break;
        case 3:
            vl_aumento = sal_atual * 0.2;
            printf("\nCargo Caixa");
            break;
        case 4:
            vl_aumento = sal_atual * 0.1;
            printf("\nCargo Gerente");
            break;
        case 5:
            vl_aumento = 0;
            printf("\nCargo Diretor");
        default :
            printf("Informe um valor valido.");
    }

    novo_sal = sal_atual + vl_aumento;
    printf("\n**************************************");
    printf("\nValor do aumento: \tR$ %.2f", vl_aumento);
    printf("\nNovo Salario: \t\tR$ %.2f", novo_sal);
    printf("\n**************************************");
    getchar();
    return 0;
}
