/*
Exercicio 15 aperfeiçoado;
*/

#include <stdio.h>

int main() {

  int n[10];
  int media;

  for (unsigned int i = 1; i < 5; i++) {
    printf("\nDigite %d nota: \n", i);
    scanf("%d", &n[i]);
    media = media + n[i];
  }
  printf("%d", media);

  // printf("\nSua média é de %.2f\n", media);


  return 0;
}