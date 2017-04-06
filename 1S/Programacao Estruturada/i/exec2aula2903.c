// 2. ler duas strings de comprimeiro 100, concatenar e armazenar o resultado em uma terceira string.
//     - pode usar o utilizar o strlen
//     - nao pode usar strcat
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    char string1[100], string2[100], string3[200];
    int i = 0, indcstring2=0;

    printf("Entre com a string1: \n");
    gets(string1);
    printf("Entre com a string1: \n");
    gets(string1);

    for (i=0,i<strlen(string1);i++){
        string3[i]=string1[i];
    }

    for (i-strlen(string1);i<strlen(string1) + strlen(string2);i++){
        string3[i]=string2[i];
        indcstring2++;
    }


    return 0;
}