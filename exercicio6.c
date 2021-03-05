/*6- Elabore um programa que receba p sçário de um funcionário e o código d
o cargo e apresente o cargo, o valor do aumento eo novo salário.
------------------------------------------
TABELA DE CARGOS:
1- Servente: 40%
2- Pedreiro: 35%
3- Mestre de Obras: 20%
4- Técnico de Segurança: 10%
------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main() {
  char cargo1[30] = "Servente"; 
  char cargo2[30] = "Pedreiro"; 
  char cargo3[30] = "Mestre de Obras"; 
  char cargo4[30] = "Técnico de Segurança"; 
  float aumento, novoSalario, salario, codigoCargo;
    
  printf("\nDigite o código do cargo: ");
  scanf("%f", &codigoCargo);
  if (codigoCargo != 1 & codigoCargo != 2 & codigoCargo != 3 & codigoCargo != 4 ) {
    printf("Código não encontrado !!");
  } else {
    printf("\nDigite o salário do funcionário: ");
    scanf("%f", &salario);

    if (codigoCargo == 1) {
      aumento = (salario * 40) / 100;
      novoSalario = salario + aumento;
      printf("\nO %s teve um aumento de R$ %.2f e agora recebe R$ %.2f", cargo1, aumento, novoSalario);
    } else if (codigoCargo == 2) {
      aumento = (salario * 35) / 100;
      novoSalario = salario + aumento;
      printf("\nO %s teve um aumento de R$ %.2f e agora recebe R$ %.2f", cargo2, aumento, novoSalario);
    } else if (codigoCargo == 3) {
      aumento = (salario * 20) / 100;
      novoSalario = salario + aumento;
      printf("\nO %s teve um aumento de R$ %.2f e agora recebe R$ %.2f", cargo3, aumento, novoSalario);      
    } else if (codigoCargo == 4) {
      aumento = (salario * 10) / 100;
      novoSalario = salario + aumento;
      printf("\nO %s teve um aumento de R$ %.2f e agora recebe R$ %.2f", cargo4, aumento, novoSalario);
    }
  } 
  return 0;
}