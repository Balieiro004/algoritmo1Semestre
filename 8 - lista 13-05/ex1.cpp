#include<stdio.h>
int main(){
    int matr[3][5], tot=0, i, j;

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("Numero: ");
            scanf("%d%*c", &matr[i][j]);
            tot += matr[i][j];
        }
    }
    printf("\nTotal: %d", tot);
    printf("\nTecle ENTER para finalizar");
    getchar();
    return 0;
}
