#include <stdio.h>

int main() {
  int par, i;
  i = 1;

  while (i <= 100) {
    i++;
    if (i % 2 == 0 ) {
      printf("%d\n", i);
    }
  }

  return 0;
}