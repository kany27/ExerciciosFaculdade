/*3-  Fazer um programa no qual o usuário digite a sua altura e o 
seu peso, ao final mostre o IMC (índice de massa corporal) e 
uma mensagem se está na faixa de peso ideal (de 18.5 a 25) ou 
não.*/

#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Vc está abaixo do peso !!");
    } else if (imc > 18.5 && imc < 25) {
        printf("Vc está com o peso normal !!");
    } else {
        printf("vc está acima do peso !!");
    }
    return 0;
}
