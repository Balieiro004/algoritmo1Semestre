#include<stdio.h>
#include<math.h>

int main(void){
    int num1, num2, calculo;
    printf("Numero 1: ");
    scanf("%d*c", &num1);
    printf("Numero 2: ");
    scanf("%d*c", &num2);

    if(num1 <= 0 | num2 <= 0){
        printf("Informe um numero maior que zero");
        getchar();
        return 0;
    }
    calculo = pow(num1, num2);

    printf("Resultado: %d", calculo);

    getchar();
    return 0;
}
