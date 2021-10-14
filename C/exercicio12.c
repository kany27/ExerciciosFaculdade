#include <stdio.h>

int main() {
  int vetorA[10];
  int i, j, aux;

  printf("Digite os elementos nas posições: \n");
  for (unsigned int i = 0; i < 10; i++) {
    printf("\nPosição %d: ", i);
    scanf("%d", &vetorA[i]);
  }

  printf("\nVetor atual: \n");
  for (unsigned int i = 0; i < 10; i++) {
    printf("%d - ", vetorA[i]);
  }

  for (i = 0; i < 9; i++) {
    for (j = i+1; j < 10; j++) {
      if (vetorA[i] > vetorA[j]) {
        aux       = vetorA[i];
        vetorA[i] = vetorA[j];
        vetorA[j] = aux;
      }
    }
  }

  printf("\nVetor ordenado: \n");
  for (i = 0; i < 10; i++) {
    printf("%d - ", i);
  }
  return 0;
}