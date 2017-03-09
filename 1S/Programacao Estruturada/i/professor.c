// calculo do salario liquido de um professor,
// inputs: hora-aula, numero de aulas dadas, % de desconto do INSS

#include "stdio.h"

int main(int argc, char const *argv[]) {
    int ha, qteAulas;
    float INSS, salario;
    printf("Entre com a Quantidade de aulas: \n");
    scanf("%d\n", &qteAulas);
    printf("Entre com o valor hora-aula: \n");
    scanf("%d\n", &ha);
    printf("Entre com o desconto do INSS (e.g.:0.3): \n");
    scanf("%d\n", &INSS);
    salario = (ha * qteAulas)*(1-INSS)
    printf("Salario: %d\n", salario);
    return 0;
}