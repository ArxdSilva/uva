#include <stdio.h>

int main ()
{
    int mtrx [20][10];
    int i,j,count;
    count=1;
    for (i=0;i<20;i++)
        for (j = 0;j<10;j++) {
            mtrx[i][j]=count;
            count++;
        }

    for (i=19;i>=0;i--)
        for (j = 9;j>=0;j--) {
            printf("O numero na posicao [%d,%d]: %d\n", i,j,mtrx[i][j]);
        }
    return(0);
}