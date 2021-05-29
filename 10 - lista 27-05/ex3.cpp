#include<stdio.h>

int somaedivisao(){
    int a, b, c, res, i, soma=0;
    
    printf("Divisor: ");
    scanf("%d%*c", &a);
    while(a < 1){
        printf("A tem que ser maior que 1, verifique o numero informado e digite novamente\n");
        printf("Divisor: ");
        scanf("%d%*c", &a);
    }
    printf("Intervalo para fazer a soma: ");
    printf("\nB: ");
    scanf("%d%*c", &b);
    printf("C: ");
    scanf("%d%*c", &c);
    for (i=b;i<=c;i++) {
        soma += i;
    }
    res = soma/a;
    return res;
}
int main(){
    int res;
    res = somaedivisao();
    printf("Resultado: %d", res);
    printf("\nTecle ENTER para finalizar");
    return 0;
}