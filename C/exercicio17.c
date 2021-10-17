#include <stdio.h>

int main() {
  int lista[10];
  int maior, menor;

  for (unsigned int i = 0; i < 10; i++) {
    printf("Informe um número: ");
    scanf("%d", &lista[i]);
  }

  maior = lista[0];
  menor = lista[0];

  for (int i = 0; i < 10; i ++) {
    if (lista[i] > maior)
      maior = lista[i];
    else if (lista[i] < menor)
      menor = lista[i];  
  }

  printf("O maior número da lista é: %d\n", maior);
  printf("O menor número da lista é: %d\n", menor);
  return 0;
}