#include <stdio.h>

int main(){
int op;
float sal, imposto, novoSal;

do{
   printf("***************************\n");
   printf("Menu de OPCAO\n");
   printf("***************************\n");
   printf("\t1 - Imposto\n");
   printf("\t2 - Novo Salario\n");
   printf("\t3 - Classificacao\n");
   printf("\t4 - Finalizar Programa\n");
   printf("***************************\n");
   printf("Opcao: ");
   scanf("%d%*c", &op);

    switch(op){
        case 1:
            printf("Informe Salario: ");
            scanf("%f%*c", &sal);
            if(sal < 500){
               imposto = sal * 0.05;
            }else
               if(sal >= 500 && sal < 850){
                    imposto = sal * 0.10;
               }else
                    imposto = sal * 0.15;
                printf("Imposto a recolher R$ %.2f\n", imposto);
                printf("Tecle ENTER para continuar\n");
                getchar();
                    break;
        case 2:
            printf("Informe Salario: ");
            scanf("%f%*c", &sal);
            if(sal > 1500){
               novoSal = sal + 25;
            }else
               if(sal >= 750 && sal <= 1500){
            novoSal = sal + 50;
               }else
            if(sal >= 450 && sal <= 750){
               novoSal = sal + 75;
            }else
               novoSal = sal + 100;
            printf("Novo Salario: %.2f\n", novoSal);
            printf("Tecle ENTER para continuar\n");
            getchar();
            break;
        case 3:
            printf("Informe Salario: ");
            scanf("%f%*c", &sal);
            if(sal <= 700){
               printf("Mal Remunerado\n");
            }else
               printf("Bem Remunerado\n");
            printf("Tecle ENTER para continuar\n");
            getchar();
            break;
            case 4:
               printf("Finalizando......");
               break;
        default:
            printf("Opcao Errada\n");
            printf("Tecle ENTER para continuar\n");
            getchar();
            break;
        }
    }while(op != 4);

    printf("\nSaindo do programa");
getchar();
return 0;
}
