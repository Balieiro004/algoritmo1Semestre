#include<stdio.h>

int main(){
    int num, i, n, j, a, m, fat=0;

    printf("Numeros a ser lido: ");
    scanf("%d%*c", &num);

    for(i=1; i<=num; i++){
        printf("\nNumero: ");
        scanf("%d%*c", &n);
        printf("Valor informado %d", n);
        a = n;
        for(j=1, m=n; j<=m; j++){
            fat = a*(m - j);
            a = fat;
        }
        printf("\nFatorial: %d", fat);
    }
    printf("\nTecle enter para finalizar.......");
    getchar();
    return 0;
}
