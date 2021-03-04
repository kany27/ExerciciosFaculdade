/*5- Desenvolva um programa no qual o usuário deve digitar o 
nome e a idade de 5 pessoas. Ao final mostrar a média de idade 
delas.*/

#include <stdio.h>
#include <math.h>

int main() {
    char nomes;
    float idades, mediaIdade, menorIdade;

    menorIdade = 18;
    for (int i = 0; i < 5; i++) {
        printf("Digite seu nome: ");
        scanf("%s", &nomes);
        printf("Digite sua idade: ");
        scanf("%f", &idades);

        mediaIdade = mediaIdade + idades;
    }

    mediaIdade = mediaIdade / 5;
    printf("media idade: %.1f", mediaIdade);
    
    return 0;
}
