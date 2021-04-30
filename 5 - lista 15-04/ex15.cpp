#include<stdio.h>

int main(){

    float precoUnit[12], custoEst[12], imposto[12], precoFinal[12], custoEstTot, impostoTot[12], medValAdi, totImposto, maiorPreco, menorPreco;
    char refrig[12], categ[12], clas[6];
    int prodQnt, i, barato, normal, caro;

    menorPreco = 10000000000;
    for(i = 1, prodQnt = 2; i <= prodQnt; i++){
        printf("Produto %d\n", i);
        printf("Preco Unitario: R$ ");
        scanf("%f%*c", &precoUnit[i]);
        printf("Precisa de Refigeracao: [S/N]: ");
        scanf("%c%*c", &refrig[i]);
        printf("Categoria:\nA - Alimentacao\nL - Limpeza\nV - Vestuario: ");
        scanf("%c%*c", &categ[i]);
        putchar('\n');

           if(precoUnit[i] < 20 && (categ[i] == 'A' || categ[i] == 'a')){
                custoEst[i] = 2;
                imposto[i] = precoUnit[i] * 0.04;
           }else
                if(precoUnit[i] < 20 && (categ[i] == 'l' || categ[i] == 'L')){
                    custoEst[i] = 3;
                    imposto[i] = precoUnit[i] * 0.02;
                }else
                    if(precoUnit[i] < 20 && (categ[i] == 'V' || categ[i] == 'v')){
                        custoEst[i] = 4;
                        imposto[i] = precoUnit[i] * 0.02;
                    }else
                        if((precoUnit[i] >= 20 && precoUnit[i] <= 50) && (refrig[i] == 'S' || refrig[i] == 's')){
                            custoEst[i] = 6;
                            imposto[i] = precoUnit[i] * 0.04;
                        }else
                            if((precoUnit[i] >= 20 && precoUnit[i] <= 50) && (refrig[i] == 'N' || refrig[i] == 'n')){
                               custoEst[i] = 0;
                               imposto[i] = precoUnit[i] * 0.02;
                            }else
                               if(precoUnit[i] > 50 && (refrig[i] == 'S' || refrig[i] == 's') && (categ[i] == 'A' || categ[i] == 'a')){
                                    custoEst[i] = 5;
                                    imposto[i] = precoUnit[i] * 0.04;
                                }else
                                    if(precoUnit[i] > 50 && (refrig[i] == 'S' || refrig[i] == 's') && (categ[i] == 'L' || categ[i] == 'l')){
                                       custoEst[i] = 2;
                                       imposto[i] = precoUnit[i] * 0.04;
                                    }else
                                       if(precoUnit[i] > 50 && (refrig[i] == 'S' || refrig[i] == 's') && (categ[i] == 'V' || categ[i] == 'v')){
                                            custoEst[i] = 4;
                                            imposto[i] = precoUnit[i] * 0.04;
                                       }else
                                            if(precoUnit[i] > 50 && (refrig[i] == 'N' || refrig[i] == 'n') && (categ[i] == 'A' || categ[i] == 'a') || (categ[i] =='V' || categ[i] == 'v')){
                                                custoEst[i] = 0;
                                                imposto[i] = precoUnit[i] * 0.02;
                                            }else
                                                custoEst[i] = 1;
                                                imposto[i] = precoUnit[i] * 0.02;


        custoEstTot = custoEstTot + custoEst[i];
        precoFinal[i] = precoUnit[i] + custoEst[i] + imposto[i];
        totImposto = imposto[i] + totImposto;
        medValAdi = custoEstTot + totImposto;

        if(maiorPreco < precoFinal[i]){
            maiorPreco = precoFinal[i];
        }
        if(menorPreco > precoFinal[i]){
            menorPreco = precoFinal[i];
        }

    }

    printf("**************************************************************************************\n");
    printf("Produto/Preco.Un./Imposto/Custo Estoque/Refrigeracao/Categoria/PreFinal\n");
    for(i = 1, prodQnt = 2; i <= prodQnt; i++){
    printf("%d \t%.2f \t%.2f \t\t%.2f \t%c \t\t%c \t%.2f\n",i,precoUnit[i], imposto[i], custoEst[i], refrig[i], categ[i], precoFinal[i]);
    }
    printf("**************************************************************************************\n");

    printf("Custo Total Estoque: R$ %.2f\n", custoEstTot);
    printf("Total de Imposto: R$ %.2f\n", totImposto);
    printf("Valores Adicionais: R$ %.2f\n", medValAdi);
    printf("Maior preco: R$ %.2f\n", maiorPreco);
    printf("Menor preco: R$ %.2f\n", menorPreco);

    getchar();
    return 0;
}
