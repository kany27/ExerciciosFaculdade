/*1- Programe um sistema que peça ao usuário para digitar um 
número (repetidamente e quantas vezes precisar) até que o 
número digitado seja 100, então o programa se encerra.
#include <stdio.h>*/

int main() {
    int num;
    while (num != 100) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num == 100) {
            printf("Número encontrado !!");
        }
    }
    return 0;
}
