/*
Elabore um programa que receba quatro notas e calcule a média aritmética entre elas.
*/

#include <stdio.h>

int main() {

  float n1, n2, n3, n4;
  float media;

  printf("\nDigite 1º nota: ");
  scanf("%f", &n1);
  printf("\nDigite 2º nota: ");
  scanf("%f", &n2);
  printf("\nDigite 3º nota: ");
  scanf("%f", &n3);
  printf("\nDigite 4º nota: ");
  scanf("%f", &n4);
  
  media = (n1 + n2 + n3 + n4)/4;

  printf("\nSua média é de %.2f\n", media);
  return 0;
}