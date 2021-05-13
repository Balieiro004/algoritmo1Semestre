#include<stdio.h>

int main(){
    int num[5], contPar=0, contImpar=0, i, soma=0;
    for (i=0; i <= 5; i++){
        printf("Numero: [%d]", i);
        scanf("%d%*c", &num[i]);
        soma += num[i];
        if(num[i] % 2 == 0){
            contPar++;
        }else
            contImpar++;
    }
    printf("\nSoma: %d", soma);
    printf("\nN Impar:  %d", contImpar);
    printf("\nN Par: %d", contPar);
    getchar();
    return 0;
}
