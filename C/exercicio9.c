/*9- Tabuada */

#include <stdio.h>
#include <math.h>

int main() {    
  int n, i, resul;
  printf("\nDigite um número: ");
  scanf("%d", &n);
  for (i = 0; i < 10; i++) {
    resul = i * n;
    printf("\n%d X %d : %d\n", i, n, resul);  
  }
  return 0;
}