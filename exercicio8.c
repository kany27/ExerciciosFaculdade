/*8- faça um programa que informe a quantidade total de calorias  
 a partir da escolha do usuário que deve informar o prato típico e bebida.
A tabela de calorias escontra-se abaixo:
------------------------------------------------
Prato                   Bebida 
Italiano 750 cal        Chá 30 cal
Japonês 324 cal         Suco de laranja 80 cal
Savadorenho 545 cal     Refirgerante 90 cal
------------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main() {
  int op;
  float total;
  total = 0;
  printf("\n1- Italiano | 2- Japonês | 3- Salvadorenho");
  printf("\nDigite o prato desejado: ");
  scanf("%d", &op);

  if (op >= 1 & op <= 3) {
    switch (op) {
        case 1 :
            total = total + 750;
            break;
        case 2 :
            total = total + 324;
            break;
        case 3 :
            total = total + 545;
            break;
    }
    
    printf("\n1- Chá | 2- Suco de laranja | 3- Refigerante");
    printf("\nDigite a bebida desejada: ");
    scanf("%d", &op);

    switch (op) {
        case 1 :
            total = total + 30;
            break;
        case 2 :
            total = total + 80;
            break;
        case 3 :
            total = total + 90;
            break;
    }
    printf("\nO total de calorias da sua refeição é: %.2f", total);
  } else {
    printf("Operador não existe.");
  } 
  return 0;
}