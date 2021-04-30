#include<stdio.h>

int main(){
    int altura_degrau, altura_alcancar, qnt_degraus;

    printf("Altura do Degrau em metros: ");
    scanf("%d%*c", &altura_degrau);
    printf("Altura que quer alcancar: ");
    scanf("%d%*c", &altura_alcancar);
    qnt_degraus = altura_alcancar / altura_degrau;
    printf("Voce devera subir %d degraus.", qnt_degraus);


    getchar();
    return 0;
}
