#include<stdio.h>

int main(){
    char op;
    int num, qntDig=0, somaNu=0, maior=0, menor, somaPares = 0, contPares=0, mediaPares=0;
    float medDig=0;

    do{

        printf("Digite um numero: ");
        scanf("%d%*c", &num);


        somaNu += num;
        printf("Numero: %d", num);


        if(num % 2 == 0){
            somaPares += num;
            contPares++;
        }

        if(qntDig = 0){
            maior = num;
            menor = num;
        }else
            if(maior < num){
            maior = num;
        }else
            if(menor > num){
            menor = num;
        }

        printf("\nDeseja Continuar? [S/N]");
        scanf("%c%*c", &op);
        qntDig ++;
    }while(op == 'S' || op == 's');

    medDig = somaNu / qntDig;
    mediaPares = somaPares / contPares;
    printf("\n**********************************");
    printf("\nNumero Digitados: \t\t%d", qntDig);
    printf("\nSoma: \t\t\t\t%d", somaNu);
    printf("\nMedia dos numeros digitados: %.2f", medDig);
    printf("\nMaior Numero: \t\t\t%d", maior);
    printf("\nMenor Numero:  \t\t\t%d", menor);
    printf("\nMedia Numeros Pares \t\t%d", mediaPares);
    printf("\n**********************************");

    getchar();
    return 0;
}
