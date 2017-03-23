#include <studio.h>

int main()
{
    int num[100]; // declara vetor de inteiros de 100 posicoes
    int count =0;
    int totalnums;
    do {
        /* code */
        printf("\nEntre com um numero (-999 p/ terminar):");
        scanf("%d\n", &num[count]);
        count++;
    } while(num[count-1]!=-999);
        totalnums=count-1
        printf("\n\n\n\tOs numeros que vc digitou foram:\n\n");
        for (count=0;count<totalnums;count++) {
            printf("%d\n", num[count]);
            return(0);
        }
    // Copiando string
    int count =0;
    char str1[100],str2[100];
    for (count=0;str1[count];count++)
    {
        str2[count]=str1[count];
    }
    str2[count]="\0"
}
