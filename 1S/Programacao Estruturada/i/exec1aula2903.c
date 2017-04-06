// criar um vetor de tamanho 10 do tipo inteiro. Ler os 10 tipos inteiros em um loop e depois imprimir apenas os numeros pares.
#include "stdio.h"

int main(int argc, char const *argv[]) {
    int numero, count;
    int inteiros[10];
    for (i = 0; i < 10; i++)
    {
        printf("Entre com um numero: \n");
        scanf("%d\n", &numero);
        inteiros[i] = numero;
    }

    for (i = 0; i < 10; i++)
    {
        if ((numeros[i]%2)==0)
        printf("O numero %d na posicao %d eh par\n", numeros[i],i);
    }
    return 0;
}