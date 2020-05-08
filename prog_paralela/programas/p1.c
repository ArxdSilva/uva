/* Hello World C Example */ 
#include <mpi.h>
#include <math.h>
#include <stdlib.h> 
#include <stdio.h> 

int main ( int argc, char **argv ){
    int np;
    int rank;
    float tempoI, tempoF;
    MPI_Init(&argc, &argv); 
    if(rank==0) {
        tempoI=MPI_Wtime(); 
    }
    MPI_Comm_size(MPI_COMM_WORLD, &np); 
    MPI_Comm_rank (MPI_COMM_WORLD, &rank);
    printf("Hello world from process %d of %d\n", rank, np); 
    if (rank==0) {
        tempoF=MPI_Wtime();
        printf("\n Tempo Inicial:%f\n",fabsf(tempoI)); 
        printf("\n Tempo Final:%f\n",fabsf(tempoF)); 
        printf("\n Tempo Decorrido:%f\n",fabsf(tempoI-tempoF));
    }
    MPI_Finalize();
    return (0);
}