/*
Escreva um programa que leia um número inteiro e apresente seu antecessor e seu sucessor.
 */
#include <stdio.h>

int main() {

  int num, ant, suc;

  printf("\nDigite seu número: ");
  scanf("%d", &num);

  ant = num - 1;
  suc = num + 1;

  printf("\nO antecessor de %d é: %d", num,  ant);
  printf("\nO sucessor de %d é: %d\n", num, suc);

  return 0;
}