#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Nota 1: ");
    scanf("%f%*c", &nota1);
    printf("Nota 2: ");
    scanf("%f%*c", &nota2);
    media = (nota1 + nota2) / 2;
    printf("\nNota Final %.2f", media);

    if(media < 5){
      printf("\nREPROVADO");
    }else
        if(media >= 5 && media < 7){
            printf("\nEXAME");
        }else
            printf("\nAPROVADO");

    getchar();
    return 0;
}
