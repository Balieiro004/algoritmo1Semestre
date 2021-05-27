#include<stdio.h>
int main(){
    int M[4][6], N[6][4], i, j, soma[4][6];

    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            printf("Numero: ");
            scanf("%d%*c", &M[i][j]);
        }
    }
    putchar('\n');
    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            printf("Numero: ");
            scanf("%d%*c", &N[i][j]);
        }
    }
    putchar('\n');
    printf("********************************\n");
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            printf("%d ", M[i][j]);
        }
        putchar('\n');
    }
    printf("********************************\n");
    for(i=0;i<6;i++){
        for(j=0;j<4;j++){
            printf("%d ", N[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
