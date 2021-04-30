#include<stdio.h>
int main(){
    float n1,n2,n3,media;
    printf("Nota 1: ");
    scanf("%f%*c", &n1);
    printf("Nota 2: ");
    scanf("%f%*c", &n2);
    printf("Nota 3: ");
    scanf("%f%*c", &n3);
    media = (n1+n2+n3)/3;
    printf("Media = %3.1f", media);
    getchar();
    return 0;
}
