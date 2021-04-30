#include<stdio.h>
#include<math.h>

int main(){
    float hora, min_horas, f, i;

    printf("Informe a Hora certa: ");
    scanf("%f%*c", &hora);
    f = modf(hora, &i);
    min_horas = (i * 60) + (f * 100);

    printf("\nTotal em minutos: %.2f", min_horas);
    getchar();
    return 0;
}
