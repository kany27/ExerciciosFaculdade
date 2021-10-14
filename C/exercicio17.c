#include <stdio.h>

int main() {
  int lista[10];
  int maior, menor;

  for (unsigned int i = 0; i < 10; i++) {
    printf("\nDigite um numero: ");
    scanf("%d", &lista[i]);
  }

  maior = lista[0];
  menor = lista[0];

  for (int i = 0; i < 10; i++) {
    if (lista[i] > maior)
      maior = lista[i];
    else if (lista[i] < menor)
      menor = lista[i];
  }

  printf("\nO maior numero da lista: %d", maior);
  printf("\nO menor numero da lista: %d", menor);

  return 0;
}