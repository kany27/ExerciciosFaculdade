/*7- Elabore um programa que receba o nome ea idade de uma pessoa e informe o nome, 
aidade eo valor da mensalidade do plano de saúde. A tabela abaixo apresenta os valores de mesalidade.
-----------------------------------------
TABELA DE VALORES
Até 18 anos - R$ 50,00 
De 19 a 29 anos - R$ 70,00
De 30 a 45 anos - R$ 90,00
De 46 a 65 anos - R$ 130,00
Acima de 65 anos R$ 170,00
----------------------------------------*/
#include <stdio.h>
#include <math.h>

int main() {

    char nome;
    int idade, valor1, valor2, valor3, valor4, valor5;

    valor1 = 50;
    valor2 = 70;
    valor3 = 90;
    valor4 = 130;
    valor5 = 170;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade == 18) {
        printf("\n%s, tem %d anos e pagará a mensalidade de R$ %d,00 reais.", &nome, idade, valor1);
    } else if (idade >= 19 & idade <= 29) {
        printf("\n%s, tem %d anos e pagará a mensalidade de R$ %d,00 reais.", &nome, idade, valor2);
    } else if (idade >= 30 & idade <= 45) {
        printf("\n%s, tem %d anos e pagará a mensalidade de R$ %d,00 reais.", &nome, idade, valor3);
    } else if (idade >= 46 & idade <= 65) {
        printf("\n%s, tem %d anos e pagará a mensalidade de R$ %d,00 reais.", &nome, idade, valor4);
    } else if (idade > 65) {
        printf("\n%s, tem %d anos e pagará a mensalidade de R$ %d,00 reais.", &nome, idade, valor5);
    } else {
        printf("\n%s, você não tem idade para ter um plano de saúde.", &nome);
    }
    return 0;
}