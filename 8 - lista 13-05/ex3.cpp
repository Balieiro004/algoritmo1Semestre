#include<stdio.h>

int main(){
    int i, j, matr1[3][4], matr2[3][4], matr3[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Matriz 1: ");
            scanf("%d%*c", &matr1[i][j]);
            printf("Matriz 2: ");
            scanf("%d%*c", &matr2[i][j]);
            matr3[i][j] = matr1[i][j] + matr2[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("\n%d + %d = %d", matr1[i][j], matr2[i][j], matr3[i][j]);
        }
    }

    getchar();
    return 0;
}
