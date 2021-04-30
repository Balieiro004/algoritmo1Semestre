#include<stdio.h>
#include<math.h>

int main(void){
    float numero, num_quad, num_cubo, raiz_qua, raiz_cub;

    printf("Informe um número maior que zero: ");
    scanf("%f%*c", &numero);
    if (numero <= 0){
        printf("Tente novamente com um numero maior que ZERO(0)");
        return 0;
    }
    num_quad = pow(numero, 2);
    num_cubo = pow(numero, 3);
    raiz_qua = sqrt(numero);
    raiz_cub = cbrt(numero);

    printf("Numero ao quadrado: %.2f\n", num_quad);
    printf("Ao cubo: %.2f\n", num_cubo);
    printf("Raiz quadrada: %.2f\n", raiz_qua);
    printf("Raiz cubica: %.2f", raiz_cub);

    getchar();
    return 0;
}
