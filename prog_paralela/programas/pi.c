#include <mpi.h>
#include <math.h>
#include <stdio.h> 


double pi(int n) {
   double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {           
        sum += sign/(2.0*i+1.0);
        sign *= -1;
    }
    return 4.0*sum;
}


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
    }
    MPI_Send(&pi(10000000), 1, MPI_INT, i, 0, com);
    //   p = pi(10000000);
    double p;
    MPI_Recv(&p, 1, MPI_INT, 0, 0, com, &status);
    printf("\npi: %1.15lf\n", p);
    if (rank==0) {
        tempoF=MPI_Wtime();
        printf("\n Tempo Inicial:%f\n",fabsf(tempoI)); 
        printf("\n Tempo Final:%f\n",fabsf(tempoF)); 
        printf("\n Tempo Decorrido:%f\n",fabsf(tempoI-tempoF));
    }
    MPI_Finalize(); 
    return (0);
}

