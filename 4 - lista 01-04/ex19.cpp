#include<stdio.h>

int main(){
    float altura, peso;

    printf("Altura: ");
    scanf("%f%*c", &altura);
    printf("Peso: ");
    scanf("%f%*c", &peso);

    if(altura < 1.2 && peso < 60){
        printf("\nClassificação = A");
    }else
        if(altura < 1.2 && peso >= 60 && peso <= 90){
            printf("\nClassificacao =  D");
        }else
            if(altura < 1.2 && peso > 90){
                printf("\nClassificacao = G");
            }else
                if((altura >= 1.2 && altura < 1.7) &&(peso < 60)){
                    printf("Classificacao = B");
                }else
                    if((altura >= 1.2 && altura < 1.7)&& (peso >= 60 && peso <= 90)){
                        printf("Classificacao = E");
                    }else
                        if((altura >= 1.2 && altura < 1.7) && (peso > 90)){
                            printf("Classificacao = H");
                        }else
                            if(altura > 1.7 && peso < 60){
                                printf("Classificacao = C");
                            }else
                                if(altura > 1.7 && (peso >= 60 && peso <= 90)){
                                    printf("Classificacao =  F");
                                }else{
                                    printf("Classificacao = I");
                                }

    getchar();
    return 0;
}
