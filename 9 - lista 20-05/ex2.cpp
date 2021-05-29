#include<stdio.h>

float percentual(float qntVeic, int tot);
float mediaAcid(float qntAci, int tot);
void astecisco();

struct estado{
    char nome[20];
    int numVeicul, acidenteTrans;

};

int main(){
    estado dados[15];
    int maior, menor, i, totVei=0, cont=0;
    float percentualFin=0, mediaAcidentes;

    for(i=0;i<15;i++){
        printf("Estado: ");
        fgets(dados[i].nome,20,stdin);
        printf("Qnt de veiculos que circulam: ");
        scanf("%d%*c", &dados[i].numVeicul);
        totVei += dados[i].numVeicul;
        printf("Qnt de acidentes: ");
        scanf("%d%*c", &dados[i].acidenteTrans);
        cont++;
        putchar('\n');
    }
    astecisco();
    for(i=0;i<15;i++){
        printf("Estado: \t\t\t%s", dados[i].nome);
        printf("Qnt de veiculos que circulam: \t%d", dados[i].numVeicul);
        percentualFin = percentual(dados[i].numVeicul, totVei);
        printf("\nPercentual de veiculos \t\t%.2f%%", percentualFin);
        printf("\nQnt de acidentes: \t\t%d", dados[i].acidenteTrans);
        mediaAcidentes = mediaAcid(dados[i].acidenteTrans, cont);
        printf("\nMedia de acidentes \t\t%.1f", mediaAcidentes);
        if(i == 0){
            maior = dados[i].acidenteTrans;
            menor = dados[i].acidenteTrans;
        }else{
            if(dados[i].acidenteTrans > maior){
                maior = dados[i].acidenteTrans;
            }
            if(dados[i].acidenteTrans < menor){
                menor = dados[i].acidenteTrans;
            }
         }
         astecisco();
    }
    astecisco();
    printf("Total veiculos: \t\t%d", totVei);
    printf("\nMaior indice de acidentes \t%d", maior);
    printf("\nMenor indice de acidentes \t%d",menor);
    astecisco();
    printf("\nTecle ENTER para finalizar");
    return 0;
}

float percentual(float qntVeic, int tot){
    return qntVeic / tot * 100;
}

float mediaAcid(float qntAci, int tot){
    return qntAci / tot;
}

void astecisco(){
    int i;
    putchar('\n');
    for(i=0;i<=46;i++){
        printf("*");
    }
    putchar('\n');
}
