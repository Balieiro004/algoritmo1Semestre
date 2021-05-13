#include<stdio.h>

int main(){
    int i, vet0[9], vet1[9], vet2[9];

    for(i=0;i<=9;i++){
        printf("\nNum 1: ");
        scanf("%d%*c", &vet0[i]);
        printf("Num 2: ");
        scanf("%d%*c", &vet1[i]);
        vet2[i] = vet0[i] + vet1[i];
    }

    for(i=0;i<=9;i++){
        printf("\n%d. %d + %d = %d",i, vet0[i], vet1[i], vet2[i]);
    }
    printf("\nTecle ENTERR para finalizar.");
    getchar();
    return 0;
}
