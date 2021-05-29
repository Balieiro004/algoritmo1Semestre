#include <stdio.h>
void maioreMenor();
int main()
{
    maioreMenor();
    printf("\nTecle ENTER para finalizar.");
    return 0;
}

void maioreMenor(){
    int num[4], i, maior, menor;
    
    for(i=0;i<5;i++){
        printf("Numero %d: ", i+1);
        scanf("%d%*c", &num[i]);
        if(i==0){
            maior = num[i];
            menor = num[i];
        }else{
            if(num[i] > maior){
                maior = num[i];
            }
            if(num[i]<menor){
                menor = num[i];
            }
        }
    }
    printf("Maior numero: %d", maior);
    printf("\nMenor Numero: %d", menor);
}