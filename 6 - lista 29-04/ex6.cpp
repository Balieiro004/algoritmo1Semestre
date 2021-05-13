#include<stdio.h>

int main(){
    int funcionario = 10, horasTrabMes, codFunc;
    char turnoTra, cat;
    float vlHoraTrab, salMin = 450, salIni = 0, auxAli=0, salFinal=0;

    printf("Codigo do funcionario: ");
    scanf("%d%*c", &codFunc);
    printf("Horas Trabalada Mês: ");
    scanf("%d%*c", &horasTrabMes);
//    printf("Valor Hora Trabalhada: R$ ");
//    scanf("%f%*c", &vlHoraTrab);
    printf("Turno de trabalho:\nM - Matutino\nV - Vespertino\nN - Noturno\nOpção: ");
    scanf("%c%*c", &turnoTra);
    while (turnoTra != 'M' && turnoTra != 'V' && turnoTra != 'N'){
        printf("\nVerifique se não foi digitado errado, ou digita em letra MAIUSCULA");
        printf("Turno de trabalho:\nM - Matutino\nV - Vespertino\nN - Noturno\nOpção: ");
        scanf("%c%*c", &turnoTra);
    }
    printf("\nCategoria de trabalho: G ou O\nOpcao: ");
    scanf("%c%*c", &cat);
    while(cat != 'G' && cat != 'O'){
        printf("\nCategoria de trabalho: G ou O\nOpcao: ");
        scanf("%c%*c", &cat);
    }

    if(cat == 'G' && turnoTra == 'N'){
        vlHoraTrab = salMin * 18/100;
    }else
        if(cat == 'G' && (turnoTra == 'M' || turnoTra == 'V')){
            vlHoraTrab = salMin * 15/100;
        }else
            if(cat == 'O' && turnoTra == 'N'){
                vlHoraTrab = salMin * 13/100;
            }else{
                vlHoraTrab = salMin * 10/100;
            }
    salIni = vlHoraTrab * horasTrabMes;

    if(salIni < 300){
        auxAli = salIni * 20 /100;
    }else
        if(salIni >= 300 || salIni < 600){
            auxAli = salIni * 15/100;
        }else
            if(salIni > 600){
                auxAli = salIni * 0.05;
            }

    salFinal = salIni + auxAli;

    printf("\n***************************************\n");
    printf("Codigo \t\t\t\t%d", codFunc);
    printf("\nHoras Trabalhadas \t\t%d", horasTrabMes);
    printf("\nValor hora Trabalhada: R$ \t%.2f", vlHoraTrab);
    printf("\nSalario Inicial: R$ \t\t%.2f", salIni);
    printf("\nAuxilio Alimentacao: \t\t%.2f", auxAli);
    printf("\nSalario Final \t\t\t%.2f", salFinal);
    printf("\n***************************************");


    getchar ();
    return 0;
}
