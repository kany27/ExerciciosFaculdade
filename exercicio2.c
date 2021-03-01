/*2- Desenvolva uma programação que peça ao usuário para 
digitar o ano do seu nascimento no formato (YYYY) e o ano atual 
também no formato (YYYY). Em seguida mostre na tela qual a 
idade do usuário em anos, em meses, em dias e em semanas.*/

#include <stdio.h>
#include <math.h>

int main() {
    int anoAtual, anoNasc, idadeA, idadeM, idadeS, idadeD;
    
    printf("\nDigite seu ano de nascimento: ");
    scanf("%d", &anoNasc);
    printf("\nDigite o ano atual: ");
    scanf("%d", &anoAtual);
    
    idadeA = anoAtual - anoNasc;
    // 1 ano tem 12 meses
    idadeM = idadeA * 12;
    // 1 ano tem 52 semanas
    idadeS = idadeM * 52;
    // 1 ano tem 365 dias
    idadeD = idadeS * 365;

    printf("\nSua idade em anos é: %d", idadeA);
    printf("\nSua idade em mêses é: %d", idadeM);
    printf("\nSua idade em semanas é: %d", idadeS);
    printf("\nSua idade em dias é: %d", idadeD);

    return 0;
}
