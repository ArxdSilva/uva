// solicitar a idade de varias pessoas e imprimir:
// 1. total de pessoas com menos de 21 anos;
// 2. total de pessoas com mais de 50 anos;
// O programa termina qnd a idade for = -99.

#include "stdio.h"

int main(int argc, char const *argv[]) {
    int idade, contmaior50=0, contmenor21=0, contTotal=0;
    do {
        printf("Entre com a sua idade: \n");
        scanf("%d\n", &idade);
        if (idade > 50) {
            contmaior50++;
        } else if (idade > 0 && idade < 21) {
            contmenor21++;
        }
        if (idade > 0) {
            contTotal++;
        }
    } while(idade != -99); {
        printf("Quantidade de pessoas com mais de 50 anos: %d\n", contmaior50);
        printf("Quantidade de pessoas com menos de 21 anos: %d\n", contmenor21);
        printf("Quantidade total de pessoas: %d\n", contTotal);
    }
    return 0;
}