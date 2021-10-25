#include <stdio.h>
#include <locale.h>

int main() {

  int num, soma, quantidade, maior, menor, pares, impares;
  float media;

  num = 0;
  soma = 0;
  quantidade = 0;
  maior = 0;
  menor = 0;
  pares = 0;
  impares = 0;


  while (num != 0) {
    printf("Informe o número: ");
    scanf("%d", &num);

    if (num != 0) {
      quantidade++;
      soma = soma + num;
    }

    if (num % 2 == 0 && num != 0)
      pares++;
    else if (num % 2 == 1 && num != 0)
      impares++;

    if (num > maior && num != 0) maior = num;
    if (num < menor && num != 0) menor = num;
  }

  media = soma / quantidade;

  printf("\nMédia: %.2f", media);
  printf("\nMaior: %d",   maior);
  printf("\nMenor: %d",   menor);
  printf("\nPares: %d",   pares);
  printf("\nÍmpares: %d", impares);



  return 0;
}