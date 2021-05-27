#include<stdio.h>

int main(){
    int matr[4][5], i, j, contPar=0, contImpar=0, somaPar=0, somaImpar=0;
    float mediaPar, mediaImpar;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Numero: ");
            scanf("%d%*c", &matr[i][j]);
            if(matr[i][j] %2 == 0){
                contPar++;
                somaPar += matr[i][j];
            }else{
                contImpar++;
                somaImpar += matr[i][j];
            }
        }
    }
    if(somaPar == 0){
        mediaPar = 0;
    }else{
        mediaPar = somaPar / contPar;
    }
    if(somaImpar == 0){
        mediaImpar = 0;
    }else{
        mediaImpar = somaImpar / contImpar;
    }


    printf("\nSoma dos numeros Pares:  %d", somaPar);
    printf("\nQnt de numeros Pares: %d", contPar);
    printf("\nMedia numero Pares %.2f", mediaPar);
    printf("\n***************************************");
    printf("\nSoma dos numeros Impares: %d", somaImpar);
    printf("\nQnt de numeros Impares: %d", contImpar);
    printf("\nMedia numeros Impares %.2f", mediaImpar);
    printf("\nTecle ENTER para finalizar");
    getchar();
    return 0;
}
