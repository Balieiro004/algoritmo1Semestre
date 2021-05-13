#include<stdio.h>

int main(){
    float nota[9];
    int i, maior=0, n;

    for(i=0;i<=9;i++){
        printf("Nota %d: ", i+1);
        scanf("%f%*c", &nota[i]);
        if(nota[i] > 7){
            maior++;
        }
    }

    printf("\nNotas maior que 7: %d", maior);
    printf("\nTecle enter para finalizar.");

    getchar();
    return 0;
}
