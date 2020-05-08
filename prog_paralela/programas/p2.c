#include <mpi.h>
#include <math.h>
#include <stdio.h> 

int main (argc, argv) 
int argc;
char **argv;
{ 
    int np, eu, i,valor;
    int rank;
    float tempoI, tempoF;
    MPI_Status status;
    MPI_Comm com = MPI_COMM_WORLD;
    MPI_Init (&argc, &argv); 
    MPI_Comm_size (com, &np); 
    MPI_Comm_rank (com, &rank); 
    if (rank == 0){
        tempoI=MPI_Wtime(); 
        valor = 10;
        for (i=0;i<=np-1;i++) {
            MPI_Send(&valor, 1, MPI_INT, i, 0, com);
            printf ("Oi! Eu sou o processo %d e enviei %d para o processo:%d\n", rank, valor,i);
            valor++; 
        }
    }
    MPI_Recv(&valor, 1, MPI_INT, 0, 0, com, &status);
    printf ("eu sou o processo %d e recebi %d\n", rank, valor);
    if (rank==0) {
        tempoF=MPI_Wtime();
        printf("\n Tempo Inicial:%f\n",fabsf(tempoI)); 
        printf("\n Tempo Final:%f\n",fabsf(tempoF)); 
        printf("\n Tempo Decorrido:%f\n",fabsf(tempoI-tempoF));
    }
    MPI_Finalize(); 
    return (0);
}