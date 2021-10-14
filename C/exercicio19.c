#include <stdio.h>


int main() {
  int num;

  printf("\nDigite um numero: ");
  scanf("%d", &num);

  if (num == 1)
    printf("\nO número %d corresponde ao mês de Janeiro\n", num);
  else if (num == 2)
    printf("\nO número %d corresponde ao mês de Fevereiro\n", num);
  else if (num == 3)
    printf("\nO número %d corresponde ao mês de Março\n", num);
  else if (num == 4)
    printf("\nO número %d corresponde ao mês de Abril\n", num);
  else if (num == 5)
    printf("\nO número %d corresponde ao mês de Maio\n", num);
  else if (num == 6)
    printf("\nO número %d corresponde ao mês de Junho\n", num);
  else if (num == 7)
    printf("\nO número %d corresponde ao mês de Julho\n", num);
  else if (num == 8)
    printf("\nO número %d corresponde ao mês de Agosto\n", num);
  else if (num == 9)
    printf("\nO número %d corresponde ao mês de Setembro\n", num);
  else if (num == 10)
    printf("\nO número %d corresponde ao mês de Outubro\n", num);
  else if (num == 11)
    printf("\nO número %d corresponde ao mês de Novembro\n", num);
  else if (num == 12)
    printf("\nO número %d corresponde ao mês de Dezembro\n", num);
  else
    printf("\nO número %d corresponde ao mês de Janeiro\n", num);
  
  return 0;
}