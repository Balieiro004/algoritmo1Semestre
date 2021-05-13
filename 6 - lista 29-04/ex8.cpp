#include<stdio.h>

int main(){
    int a, b, c, nTermos, i;

    printf("Numero de termos: ");
    scanf("%d%*c", &nTermos);
    a = 2;
    b = 7;
    c = 3;
    for(i=1; i<=nTermos; i++){
        printf("%d, %d, %d, ", a, b, c);
    }
    getchar();
    return 0;
}
