#include<stdio.h>

int main(){
    float nota1, nota2, media=0, mediaSala=0, somaMedia=0;
    int contA=0, contE=0, contR=0, i;

    for(i=0; i < 2; i++){
        printf("Nota 1: ");
        scanf("%f%*c", &nota1);
        printf("Nota 2: ");
        scanf("%f%*c", &nota2);
        media = (nota1 + nota2) /2;
        printf("Media: %.2f\n", media);
        if (media < 3){
            printf("REPROVADO\n");
            contR++;
        }else
            if(media >= 3 && media <= 7){
                printf("EXAME\n");
                contE++;
            }else{
                printf("APROVADO\n");
                contA++;
            }
        somaMedia = somaMedia + media;
    }
    mediaSala = somaMedia / 2;
    printf("********************************\n");
    printf("Aprovados: %d\n", contA);
    printf("Exames: %d\n", contE);
    printf("Reprovados %d\n", contR);
    printf("Media Sala %.2f", mediaSala);
    getchar();
    return 0;
}
