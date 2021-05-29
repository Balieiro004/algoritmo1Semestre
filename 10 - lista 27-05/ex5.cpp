#include <stdio.h>

float percentual();
int main(){
    float acrescimo;
    acrescimo = percentual();
    printf("Percentual de aumento: %.2f %%", acrescimo);
    return 0;
}

float percentual(){
    
    float vlAntigo, vlNovo, diferenca, acrescimo;
    
    printf("Valor antigo: ");
    scanf("%f%*c", &vlAntigo);
    printf("Valor Novo: ");
    scanf("%f%*c", &vlNovo);
    diferenca = vlNovo - vlAntigo;
    acrescimo = diferenca / vlAntigo * 100;
    
    return acrescimo;
}
