#include<stdio.h>
struct acidentes{
    char estado[20];
    int nVeiculos, nAcidTrans;
};


int main(){
    acidentes transitos[15];
    int i, maiorInd, menorInd, totVei=0, totAci=0;
    float mediaAci, veiculoPer;

    for(i=0;i<2;i++){
        printf("Nome do estado: ");
        fgets(transitos[i].estado,20,stdin);
        printf("N. de veiculos que circulam no estado: ");
        scanf("%d%*c", &transitos[i].nVeiculos);
        printf("N. de Acidente de Transito: ");
        scanf("%d%*c", &transitos[i].nAcidTrans);
        mediaAci = transitos[i].nVeiculos;
        totVei += transitos[i].nVeiculos;
        totAci += transitos[i].nAcidTrans;
        putchar('\n');
        if(i==0){
            maiorInd = transitos[i].nAcidTrans;
            menorInd = transitos[i].nAcidTrans;
        }else{
            if(transitos[i].nAcidTrans > maiorInd){
                maiorInd = transitos[i].nAcidTrans;
            }
            if(transitos[i].nAcidTrans < menorInd){
                menorInd = transitos[i].nAcidTrans;
            }
        }
    }
    for(i=0;i<2;i++){
        printf("\nTot veiculos %d", totVei);
        printf("\nTot Acidente %d", totAci);
        printf("\nNome do Estado: \t\t%s", transitos[i].estado);
        printf("N. de veiculos que circulam: \t%d", transitos[i].nVeiculos);
        printf("\nN. de Acidente de Transito: \t%d", transitos[i].nAcidTrans);
        veiculoPer = transitos[i].nVeiculos / totVei * 100;
        printf("\nVeiculos por estado \t\t%.1f %%", veiculoPer);
        mediaAci = transitos[i].nAcidTrans / totAci * 100;
        printf("\nMedia de acidente no estado \t%.1f %%", mediaAci);
        putchar('\n');
    }
    printf("\nMaior Indice de Acidentes: %d", maiorInd);
    printf("\nMenor indice de Acidentes: %d", menorInd);
    printf("\nTotal de veiculos: %d", totVei);
    printf("\nTot Acidente %d", totAci);
    printf("\nTecle ENTER para finalizar");
    getchar();
    return 0;
}
