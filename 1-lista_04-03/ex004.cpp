#include<stdio.h>
int main(){
    float salario, novo_sal;
    printf("Informe o Salario: ");
    scanf("%f%*c", &salario);
    novo_sal = (salario * 25/100) + salario;
    printf("Novo salario: R$ %3.2f", novo_sal);

    getchar();
    return 0;
}
