#include<stdio.h>

int main(){
    float sal=1000, aumento=0, sal_novo=0, por=1.5, porNova;
    int qntAnos, i;

    aumento = sal * por / 100;
    sal_novo = aumento + sal;

    printf("Daqui quantos anos quer saber o salario: ");
    scanf("%d%*c", &qntAnos);

    for(i=1; i<=qntAnos; i++){
        porNova = por * 2;
        aumento = sal_novo * porNova /100;
        sal_novo = aumento + sal_novo;
        por = porNova;
        printf("Salario em %d sera: R$ %.2f\n", 2006+i,sal_novo);
    }
    printf("Salario Final: %.2f", sal_novo);
    getchar();
    return 0;
}
