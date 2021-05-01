#include <stdio.h>

int main(){
    float precoUnit, custoEstoq=0, imposto=0, totImposto=0, precoFinal=0, medAdi=0, maiorPreco=0, menorPreco=0;
    char refri, cat;
    int i, prod=12, classBa=0, classNo=0, classCa=0;

    for(i=1;i<=prod;i++){
        printf("Produto %d\n", i);
        printf("Preco Unitario: ");
        scanf("%f%*c", &precoUnit);
        printf("Precisa de Refrigeracao [S/N]: ");
        scanf("%c%*c", &refri);
        while((refri != 'S' && refri != 's') && (refri != 'n' && refri != 'N') ){
            printf("Precisa de Refrigeracao [S/N]: ");
            scanf("%c%*c", &refri);
        }
        printf("Categoria:\nA - Alimentacao\nL - Limpeza\nV - Vestuario: ");
        scanf("%c%*c", &cat);
        while((cat != 'A' && cat!= 'a') && (cat != 'L' && cat != 'l') && (cat != 'V' && cat != 'v')){
            printf("Categoria:\nA - Alimentacao\nL - Limpeza\nV - Vestuario: ");
            scanf("%c%*c", &cat);
        }

        if(precoUnit < 20 && (cat == 'A' || cat == 'a')){
            custoEstoq += 2;
        }else
            if(precoUnit < 20 && (cat == 'L' || cat == 'l')){
                custoEstoq += 3;
            }else
                if(precoUnit < 20 && (cat == 'V' || cat == 'v')){
                    custoEstoq += 4;
                }else
                    if((precoUnit >= 20 && precoUnit <= 50) && (refri == 'S' || refri == 's')){
                        custoEstoq += 6;
                    }else
                        if((precoUnit >= 20 && precoUnit <= 50) && (refri == 'N' || refri == 'n')){
                            custoEstoq += 0;
                        }else
                            if(precoUnit > 50 && (refri == 'S' || refri == 's') && (cat == 'A' || cat == 'a')){
                                custoEstoq += 5;
                            }else
                                if(precoUnit > 50 && (refri == 'S' || refri == 's') && (cat == 'L' || cat == 'l')){
                                    custoEstoq += 2;
                                }else
                                    if(precoUnit > 50 && (refri == 'S' || refri == 's') && (cat == 'V' || cat == 'v')){
                                        custoEstoq += 4;
                                    }else
                                        if(precoUnit > 50 && (refri == 'N' || refri == 'n') && (cat == 'A' || cat == 'a') || (cat == 'V' || cat == 'v')){
                                            custoEstoq += 0;
                                        }else{
                                            custoEstoq += 1;
                                        }

        if((cat == 'A' || cat == 'a') || (refri == 'S' || refri == 's')) {
            imposto = precoUnit * 4 / 100;
        }else{
            imposto = precoUnit * 2 / 100;
        }

        precoFinal = precoUnit + custoEstoq + imposto;
        totImposto += imposto;
        printf("*******************************\n");
        printf("\tDados Produto %d\n",i);
        printf("\tImposto %.2f\n", imposto);
        printf("\tPreco final: R$ %.2f\n", precoFinal);
        if(precoFinal < 20){
            printf("\tProduto Barato.\n");
            classBa++;
        }else
            if(precoFinal >20 && precoFinal < 100){
                printf("\tProduto Normal\n");
                classNo++;
            }else{
                printf("\tProduto Caro\n");
                classCa++;
                }
        printf("\n");
        printf("*******************************\n");
        medAdi = (custoEstoq + totImposto) / prod;

        if(i == 1){
            maiorPreco = precoFinal;
            menorPreco = precoFinal;
        }else
            if(precoFinal > maiorPreco){
                maiorPreco = precoFinal;
            }
            if(precoFinal < menorPreco){
                menorPreco = precoFinal;
            }

    }
    printf("**************************************************\n");
    printf("Custo Total do Estoque: \tR$%.2f\n", custoEstoq);
    printf("Total de imposto: \t\tR$ %.2f\n", totImposto);
    printf("Media Valores Adicionais \tR$ %.2f\n", medAdi);
    printf("Maior Preco: \t\t\tR$ %.2f\n", maiorPreco);
    printf("Menor Preco: \t\t\tR$ %.2f\n", menorPreco);
    printf("Quantidade Produtos Barato: \t%d\n", classBa);
    printf("Quantidade Produtos Normal: \t%d\n", classNo);
    printf("Quantidade Produtos Caro: \t%d\n", classCa);
    printf("**************************************************\n");
    getchar();
    return 0;
}
