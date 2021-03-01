#include <stdio.h>

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
