#include<stdio.h>
int soma(int x, int y){
    return x + y;
}
int main(){
    int a, b, n;

    printf("Numero 1: ");
    scanf("%d%*c", &a);
    printf("Numero 2: ");
    scanf("%d%*c", &b);
    n = soma(a,b);
    printf("Soma: %d + %d = %d", a, b, n);
    getchar();
    return 0;
}
