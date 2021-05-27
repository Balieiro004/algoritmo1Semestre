#include<stdio.h>
int main(){
    int matr[5][5],i,j, cont=0, soma=0;
    float media = 0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Numero: ");
            scanf("%d%*c", &matr[i][j]);
            if(i%2==0){
                soma += matr[i][j];
                cont++;
            }
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", matr[i][j]);
        }
        putchar('\n');
    }
    media = soma / cont;
    printf("\n*********************************");
    printf("\nSoma Das linhas Pares: %d", soma);
    printf("\nMedia dos valores nas linhas Pares: %.2f", media);
    getchar();
    return 0;
}
