#include<stdio.h>

int main(){
    int a, b, c, cont, quant;

    printf("Informe quantas sequencia: ");
    scanf("%d%*c", &quant);
    a = 0;
    b = 1;

    printf("%d %d ", a, b);

    for(cont = 1; cont < quant - 1; cont++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    getchar();
    return 0;
}
