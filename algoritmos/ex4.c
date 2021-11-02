#include <stdio.h>

int main() {
  int maior, menor, num;
  num = 0;
  maior = -99999;
  menor = 99999;

  for (int i = 0; i < 10; i++){
    printf("Informe um número: ");
    scanf("%d", &num);

    if (num > maior)
      maior = num;
    if (num < menor)
      menor = num;
  }

  printf("Maior número encontrado: %d\n", maior);
  printf("Menor número encontrado: %d\n", menor);  

  return 0;
}