#include <stdio.h> 
#include <math.h>
#include <mpi.h>

int main (argc, argv) 
int argc;
char **argv; 
{
    int np, eu, valor;
    float tempoI, tempoF;
    int rank;
    MPI_Status status;
    MPI_Comm com = MPI_COMM_WORLD;
    MPI_Init(&argc, &argv); 
    MPI_Comm_size(com, &np); 
    MPI_Comm_rank(com, &rank);
    if (rank == 0){ 
        tempoI=MPI_Wtime(); 
        valor = 5;
        MPI_Bcast(&valor, 1, MPI_INT, 0, com);
        printf("Ah! Eu sou o processo %d\n", rank); }
    else {
        MPI_Bcast (&valor, 1, MPI_INT, 0, com);
        printf ("eu sou o processo %d e recebi %d\n", rank, valor);
    } 
    if (rank==0) {
        tempoF=MPI_Wtime();
        printf("\n Tempo Inicial:%f\n",fabsf(tempoI)); 
        printf("\n Tempo Final:%f\n",fabsf(tempoF)); 
        printf("\n Tempo Decorrido:%f\n",fabsf(tempoI-tempoF));
    }
    MPI_Finalize(); 
    return 0;
}
