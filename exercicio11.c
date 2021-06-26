#include <stdio.h>

int main() {
  int  vetorA[10];
  int i, acha, busca;

  printf("Informe os elementos nas posições: ");
  for(unsigned i = 0; i < 10; i++) {
    printf("\nPosição %d: ", i);
    scanf("%d", &vetorA[i]);
  }

  printf("\nDigite o elemento que deseja buscar: ");
  scanf("%d", &busca);
  i = 0;
  acha = 0;
  while((acha == 0) && (i < 10)) {
    i++;
    if(vetorA[i] == busca) {
      acha = 1;
    }
  }

  printf("\nO elemento %d foi encontrado na posição %d\n", busca, i);
  return 0;
}