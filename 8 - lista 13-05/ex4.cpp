#include<stdio.h>
int main(){
    int mat[3][3], i, j, soma=0,cont=0;
    float media;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Numero na posicao %d.%d: ", i, j);
            scanf("%d%*c", &mat[i][j]);
            soma += mat[i][j];
            cont++;
        }
    }
    media = soma / cont;
    printf("\nMedia: %.2f", media);
    printf("\nTecle ENTER para terminar.\n");
    getchar();
    return 0;
}
