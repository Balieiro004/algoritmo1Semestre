#include<stdio.h>

int main(){
    float salario, novo_sal;

    printf("Informe o Salario: R$ ");
    scanf("%f%*c", &salario);

    if(salario <= 500){
        novo_sal = (salario * 1.05);
    }else
        if(salario >= 501 && salario <= 1200){
            novo_sal = (salario * 1.12);
       }else{
            novo_sal = salario;
       }

    if(salario <= 600){
        novo_sal = novo_sal + 150;
    }else{
        novo_sal = novo_sal + 100;
    }
    printf("Novo Salario R$ %.2f\n", novo_sal);

    getchar();
    return 0;
}
