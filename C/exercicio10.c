#include <stdio.h>

int main() {
  int vetorA[10];
  int i, j, aux;

  printf("Informe os elementos nas posições: ");
  for(unsigned i = 0; i < 10; i++) {
    printf("\nPosição %d: ", i);
    scanf("%d", &vetorA[i]);
  }

  printf("\nVetor atual: \n");
  for(i = 0; i <10; i++) {
    printf("%d - ", i);
  }

  //BublleSort
  for(i = 0; i < 9; i++) {
    for(j = i + 1; j < 10; j++) {
      if(vetorA[i] > vetorA[j]) {
        aux = vetorA[i];
        vetorA[i] = vetorA[j];
        vetorA[j] = aux;
      }
    }
  }

  printf("\nVetor ordenado: \n");
  for(i = 0; i < 10; i++) {
    printf("%d - ", i);
  }
  return 0;
}