#include <stdio.h>

int main() {
  int negativo, num, i;
  i = 1;
  negativo = 0;

  while (i <= 10) {
    printf("Infotme um número: ");
    scanf("%d", &num);

    if (num < 0)
      negativo += 1;

    i++;
  }

  printf("Quantidade de números negativos: %d\n", negativo);
  return 0;
}