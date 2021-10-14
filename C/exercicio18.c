#include <stdio.h>

int main() {
  int n;

  printf("\nDigite um numero: ");
  scanf("%d", &n);

  if (n % 3 == 0)
    printf("%d é divisivel por 3\n", n);
  else if (n % 7 == 0)
    printf("%d é divisivel por 7\n", n);
  else
    printf("\nNão e divisivel por 3 nem por 7\n");

  return 0;
}