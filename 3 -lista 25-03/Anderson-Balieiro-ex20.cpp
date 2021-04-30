#include<stdio.h>

int main(){
    int cod_produto, cod_pais;
    float peso_kl, peso_gramas, preco, imposto, vl_tot;

    printf("Codigo do produto: ");
    scanf("%d%*c", &cod_produto);

    if(cod_produto < 1 || cod_produto > 10){
        printf("Informe um codigo valido entre 1 e 10.\n");
        return 0;
    }

    printf("Informe quantos quilo tem o produto: ");
    scanf("%f%*c", &peso_kl);
    printf("Codigo do Pais de origem: ");
    scanf("%d%*c", &cod_pais);

    if(cod_pais < 1 || cod_pais > 3){
        printf("Informe um codigo de pais valido: 1,2 ou 3.\n");
        return 0;
    }
    peso_gramas = peso_kl * 1000;


    if(cod_produto >= 1 && cod_produto <= 4){
        preco = peso_gramas * 10;
    }else
        if(cod_produto >= 5 && cod_produto <= 7){
            preco =peso_gramas * 25;
        }else{
            preco = peso_gramas * 35;
        }

    if(cod_pais == 1){
        imposto = 0;
    }else
        if(cod_pais == 2){
            imposto = preco * 0.15;
        }else{
            imposto = preco * 0.25;
        }
    vl_tot = preco + imposto;

    printf("\n*******************************************\n");
    printf("Produto em gramas: \t\t%.1f\n", peso_gramas);
    printf("Preco total do produto: \tR$ %.2f\n", preco);
    printf("Valor do Imposto: \t\tR$ %.2f\n", imposto);
    printf("Valor total: \t\t\tR$ %.2f\n", vl_tot);
    printf("*******************************************\n");
    getchar();
    return 0;
}
