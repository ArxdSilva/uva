#include <mpi.h>
#include <stdio.h>
#include <math.h>


int main (argc, argv)
int argc;
char **argv;
{
    int np, eu, valor, total; 
    MPI_Status status;
    int rank;
    float tempoI, tempoF;
    MPI_Comm com = MPI_COMM_WORLD;
    MPI_Init(&argc, &argv); 
    MPI_Comm_size(com, &np); 
    MPI_Comm_rank(com, &rank); 
    if (rank == 0){
        tempoI=MPI_Wtime(); 
    }
    valor = 5; 
    total = 0;
    printf("Eu sou o processo %d e tenho o valor %d\n", rank, valor); 
    MPI_Reduce(&valor, &total, 1, MPI_INT, MPI_SUM, 0, com);
    printf("Eu sou o processo %d e tenho %d\n", rank, total);
    if (rank==0) {
        tempoF=MPI_Wtime();
        printf("\n Tempo Inicial:%f\n",fabsf(tempoI)); 
        printf("\n Tempo Final:%f\n",fabsf(tempoF)); 
        printf("\n Tempo Decorrido:%f\n",fabsf(tempoI-tempoF));
    }
    MPI_Finalize();
    return 0; 
}


