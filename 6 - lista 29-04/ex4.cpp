#include<stdio.h>

int main(){
    int i, n=3, codCid, numVeiPas, numAciVit, maior, menor, cidMaior=0, cidMenor=0, medVei=0, somaVei=0, somaMenosde200=0, cont=0;
    float medMenosveic=0;
    for(i = 1; i<=n; i++){
        printf("Codigo da cidade: ");
        scanf("%d", &codCid);
        printf("Numero de veiculos de Passeio: ");
        scanf("%d", &numVeiPas);
        printf("Acidentes com Vitimas: ");
        scanf("%d", &numAciVit);
        printf("\n*****************************\n");
        if(i == 1){
            maior = numAciVit;
            menor = numAciVit;
            cidMaior = codCid;
            cidMenor = codCid;
        }else
            if(numAciVit > maior){
                maior = numAciVit;
                cidMaior = codCid;
            }
            if(numAciVit < menor){
                menor = numAciVit;
                cidMenor = codCid;
            }
        somaVei += numVeiPas;

        if(numVeiPas < 2000){
            somaMenosde200 += numAciVit;
            cont++;
        }
    }

    medVei = somaVei / n;
    medMenosveic = somaMenosde200 / cont++;

    printf("************************************************");
    printf("\nMaior indice de acidentes: %d na cidade %d", maior, cidMaior);
    printf("\nMenor indice de acidentes %d na cidade %d", menor, cidMenor);
    printf("\nMedia de veiculos das cidades %d", medVei);
    printf("\nMedia de Acidentes com menos de 2000 veiculos %.2f", medMenosveic);
    printf("************************************************");
    printf("\nTecle ENTER para finalizar......");
    getchar();
    return 0;
}
