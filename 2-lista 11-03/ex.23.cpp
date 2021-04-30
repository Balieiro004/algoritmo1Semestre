#include<stdio.h>
#include<math.h>
int main(){
    float numero, a, i, f;

    printf("Informe um numero: ");
    scanf("%f%*c", &numero);
    a = ceil(numero);
    f = modf(numero, &i);
    printf("Parte inteira: %.2f", i);
    printf("\nParte Fracionaria: %.2f", f);
    printf("\nArredodamento desse numero: %.2f", a);

    getchar();
    return 0;
}
