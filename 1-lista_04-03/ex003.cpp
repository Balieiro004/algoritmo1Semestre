#include<stdio.h>
int main(){
    float n1,n2,n3,p1,p2,p3,media;
    printf("Nota 1: ");
    scanf("%f%*c", &n1);
    printf("Peso: ");
    scanf("%f%*c", &p1);
    printf("Nota 2: ");
    scanf("%f%*c", &n2);
    printf("Peso: ");
    scanf("%f%*c", &p1);
    printf("Nota 3: ");
    scanf("%f%*c", &n3);
    printf("Peso: ");
    scanf("%f%*c", &p1);
    media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
    printf("Media = %3.2f", media);
    getchar();
    return 0;
}
