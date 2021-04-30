#include<stdio.h>
int main(){
    int num1,num2,num3,num4,soma;
    printf("Valor 1: ");
    scanf("%d%*c", &num1);
    printf("Valor 2: ");
    scanf("%d%*c", &num2);
    printf("Valor 3: ");
    scanf("%d%*c", &num3);
    printf("Valor 4: ");
    scanf("%d%*c", &num4);
    soma = num1 + num2 + num3 + num4;
    printf("Total = %d", soma);
    getchar();
    return 0;
}
