#include<stdio.h>

int main(){
    int i, vet0[7], vet1[7], j=6;

    for(i=0;i<=6;i++){
        printf("Numero: %d: ", i);
        scanf("%d%*c",&vet0[i]);
        vet1[j] = vet0[i];
        j--;
    }

    for(i=0;i<=6;i++){
        printf("\n%d. %d",i, vet1[i]);
    }
    getchar();
    return 0;
}
