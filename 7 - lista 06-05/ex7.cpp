#include<stdio.h>
int main(){
    int vet0[14], i, j, cont=0;

    for(i=0;i<=14;i++){
        printf("Numero %d: ",i);
        scanf("%d%*c", &vet0[i]);
    }
    for(i=0;i<=14;i++){
        cont=0;
        for(j=1;j<=vet0[i];j++){
            if(vet0[i] % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("\nNumero Primo %d: %d",i, vet0[i]);
        }
    }
    printf("\nTecle ENTER para finalizar");
    getchar();
    return 0;
}
