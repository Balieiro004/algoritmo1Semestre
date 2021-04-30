#include<stdio.h>

int main(void){
    int ano_nasc, ano_atual, idade, idade_2050;

    printf("Ano de nascimento: ");
    scanf("%d%*c", &ano_nasc);
    printf("Ano atual: ");
    scanf("%d*%c", &ano_atual);

    idade = ano_atual - ano_nasc;

    printf("Idade: %d\n", idade);

    idade_2050 = 2050 - ano_nasc;

    printf("Em 2050 voce tera: %d anos.", idade_2050);

    getchar();
    return 0;
}
