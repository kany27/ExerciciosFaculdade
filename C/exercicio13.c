#include <stdio.h>

int main() {

  int idade, ano;
  float altura;
  char nome[30];

  printf("Digite seu nome: \n");
  scanf("%s", nome);
  printf("Digite sua idade: \n");
  scanf("%d", &idade);
  printf("Digite sua altura: \n");
  scanf("%f", &altura);

  ano = 2021 - idade;

  printf("\nSeu nome: %s", nome);
  printf("\nSua altura: %.2f", altura);
  printf("\nSua idade: %d", idade);
  printf("\nSua data de nascimento: %d", ano);

  return 0;
}