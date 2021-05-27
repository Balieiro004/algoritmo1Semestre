#include<stdio.h>
struct habitante{
    int idade;
    char sexo;
    float rendaFamiliar;
    int nFilhos;
};

int main(){
    habitante pessoa [20];
    int i, cont=0, somaSal=0, menorId, maiorId, contMulher=0;
    float mediaSal = 0;

    for(i=0;i<20;i++){
        printf("Idade: ");
        scanf("%d%*c", &pessoa[i].idade);
        if(i==0){ //if para determinar as idades maior e menor
            menorId = pessoa[i].idade;
            maiorId = pessoa[i].idade;
        }else
            if(pessoa[i].idade > maiorId){
                maiorId = pessoa[i].idade;
            }
            if(pessoa[i].idade < menorId){
                menorId = pessoa[i].idade;
            }
        printf("Sexo: Masculino[M] ou [F]Feminino: ");
        scanf("%c%*c", &pessoa[i].sexo);
        while(pessoa[i].sexo != 'M' && pessoa[i].sexo != 'm' && pessoa[i].sexo != 'F' && pessoa[i].sexo != 'f'){ //validando o sexo
            printf("Verifique o sexo informado e digite novamente\n");
            printf("Sexo: Masculino[M] ou [F]Feminino: ");
            scanf("%c%*c", &pessoa[i].sexo);
        }
        printf("Renda Familiar: R$ ");
        scanf("%f%*c", &pessoa[i].rendaFamiliar);
        somaSal += pessoa[i].rendaFamiliar;
        printf("Numero de filhos: ");
        scanf("%d%*c", &pessoa[i].nFilhos);
        while(pessoa[i].nFilhos < 0){ //Validando numero de filhos
            printf("Verifique o numero de filhos indicado e informe novamente\n");
            printf("Numero de filhos: ");
            scanf("%d%*c", &pessoa[i].nFilhos);
        }
        if((pessoa[i].sexo == 'F' || pessoa[i].sexo == 'f') && (pessoa[i].nFilhos > 2) && (pessoa[i].rendaFamiliar < 600)) {
            contMulher++;
        }
        cont++;
        putchar('\n');
    }
    mediaSal = somaSal/cont;
    printf("\n*****************************************************************************");
    printf("\nMedia Salario: R$\t\t\t\t\t\t\t%.2f", mediaSal);
    printf("\nMaior Idade: \t\t\t\t\t\t\t\t%d", maiorId);
    printf("\nMenor Idade: \t\t\t\t\t\t\t\t%d", menorId);
    printf("\nNumero de mulheres com mais de 2 filhos e com renda abaixo de R$ 600,00: %d", contMulher);
    printf("\n*****************************************************************************");
    printf("\nTecle ENTER para finalizar");
    getchar();
    return 0;
}
