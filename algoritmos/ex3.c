#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");
  // int nomes;
  char nome[50];
  printf("Informe o nome do aluno: ");
  scanf("%s", nome);

  while(nome == "fim") {
    printf("TESTE");
    // printf("Informe o nome do aluno: ");
    // scanf("%s", nome);
    // nomes += 1;
  }

  printf("Quantidade de nomes digitados: %s\n", nome);

  return 0;
}