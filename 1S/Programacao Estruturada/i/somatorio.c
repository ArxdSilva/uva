// realizar o somatorio dos numeros considerando como:
// somatorio (5) = 5+somatorio de (4) e assim por diante
// compilar depois
#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[]) {
    long int somatorio;
    printf("Entre com um numero para somar: \n");
    scanf("%d\n", &somatorio);
    s = somatorio();
    printf("somatorio: %d\n", s);
    return 0;
}

long int somatorio(long int s) {
    if (n){
        return (n+somatorio(n-1));
    } else {
        return 1;
    }
}