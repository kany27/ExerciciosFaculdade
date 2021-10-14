#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1, n2, result;

//Função de Soma
float soma() {
  printf("\nInsira o valor de n1: ");
  scanf("%f", &n1);
  printf("\nInsira o valor de n2: ");
  scanf("%f", &n2);

  result = n1 + n2;
  printf("\nA soma de %.1f com %.1f é: %.2f", n1, n2, result);
  return result;
}

float subtracao() {
  printf("\nInsira o valor de n1: ");
  scanf("%f", &n1);
  printf("\nInsira o valor de n2: ");
  scanf("%f", &n2);

  result = n1 - n2;
  printf("\nA subtração de %.1f com %.1f é: %.2f", n1, n2, result);
  return result;
}

float divisao() {
  printf("\nInsira o valor de n1: ");
  scanf("%f", &n1);
  printf("\nInsira o valor de n2: ");
  scanf("%f", &n2);

  result = n1 / n2;
  printf("\nA divisão de %.1f com %.1f é: %.2f", n1, n2, result);
  return result;
}

float multiplicacao() {
  printf("\nInsira o valor de n1: ");
  scanf("%f", &n1);
  printf("\nInsira o valor de n2: ");
  scanf("%f", &n2);

  result = n1 * n2;
  printf("\nA multiplicação de %.1f com %.1f é: %.2f", n1, n2, result);
  return result;
}

void menu_principal() {

  int opcao;

  do {
    system("clear");
    printf("\nMENU PRINCIPAL\n\n");
    printf("1- Soma\n");
    printf("2- Subtração\n");
    printf("3- Divisão\n");
    printf("4- Multiplicação\n");
    printf("0- Sair\n");

    printf("\nOpção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        system("clear");
        soma();
        system("pause");
        break;
      case 2:
        system("clear");
        subtracao();
        system("pause");
        break;
      case 3:
        system("clear");
        divisao();
        system("pause");
        break;
      case 4:
        system("clear");
        multiplicacao();
        system("pause");
        break;
    
      default:
        system("clear");
        printf("\nOpção inválida");
        system("pause");
        break;
    }

  } while (opcao != 0);
  
}


float soma();
float subtracao();
float divisao();
float multiplicacao();
void menu_principal();

int main() {
  setlocale(LC_ALL, "Portuguese");
  menu_principal();
} 