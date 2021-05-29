#include<stdio.h>
int retorno(int num){
    if(num > 0){
        return 1;
    }else
        return 0;
}

int main(){
    int num, res;

    printf("Informe um numero: ");
    scanf("%d%*c", &num);

    res = retorno(num);
    printf("Valor %d", res);
    getchar();
    return 0;
}
