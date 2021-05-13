#include<stdio.h>

int main(){
    int vetor[6], i;

    for(i=0;i<=6; i++){
        printf("Numero %d: ", i+1);
        scanf("%d%*c", &vetor[i]);
    }

    printf("\nMultiplo de 2");
    for(i=0;i<=6;i++){
        if(vetor[i] % 2 == 0){
            printf("\n\t%d ", vetor[i]);
        }
    }
    printf("\nMultiplos de 3");
    for(i=0;i<=6;i++){
        if(vetor[i] % 3 == 0){
            printf("\n\t%d", vetor[i]);
        }
    }

    printf("\nMultiplos de 2 e 3");
    for(i=0;i<=6;i++){
        if(vetor[i] % 3 == 0 || vetor[i] % 2 == 0){
            printf("\n\t%d", vetor[i]);
        }
    }
    printf("\nTecle ENTER para finalizar.");
    getchar();
    return 0;
}
