/*4- Faça um programa para ler o salário anual de um funcionário 
e o piso salarial mensal da sua categoria. Mostrar salário 
mensal do funcionário e dizer se está abaixo ou acima do piso 
salarial mensal.*/

#include <stdio.h>
#include <math.h>

int main() {
    char profissao;
    float piso, sAnual, sMensal;

    printf("Digite sua profissão: ");
    scanf("%s", &profissao);
    printf("Digite seu salário anual: ");
    scanf("%f", &sAnual);
    printf("Digite o piso salárial mensal: ");
    scanf("%f", &piso);
    //Piso salárial mensal de Desenvolvedor Mobile = R$ 2.365,01

    sMensal = sAnual / 12;
    
    printf("\nProfissão: %s", &profissao);
    printf("\nSalário mensal: %f", sMensal);

    if (sMensal < piso) {
        printf("\nSeu salário está abaixo do piso salárial mensal !!");
    } else if (sMensal == piso) {
        printf("\nSeu salário está normal!!");
    } else {
        printf("\nSeu salário mensal está acima do piso!!");
    }
    return 0;
}
