#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//função que calcula fatorial(!)
double fatorial(int termos){
   double aux;
   aux = termos;
   while(termos > 1){
      aux = aux * (termos - 1);
      termos--;
   }
   return (aux);
}

//função potencia(x^y)
double power(double base, int expoente) {
   double resultado;
   int i;
   resultado = 1;
   if(expoente == 0) return 1;
   for(i = 0;i < expoente; i++) resultado = resultado * base;
   return (resultado);
}

double serie_seno(double ang, int termos, int h){
   int i;
   double resultado = 0.0;
   for(i = 0; i < termos;i++){
      resultado += power(-1, i) * power(ang, 2*i + 1) / fatorial(2*i + 1);
   }
   return (resultado*h);
}

int main(int argc, char *argv[]){
   // CONVERTE ANGULO
   double SENO, COSN, TG;
   int n, myid, numprocs, i;
   double pi = 3.14159265358979323846;
   double ang=0.0;
   ang = (double) (atof(argv[2]) + (atof(argv[3])/60.0) + (atof(argv[4])/3600.0));
   ang = (ang*pi)/180.0; // angulo em radianos
   float tempoI, tempoF;
   MPI_Init(&argc,&argv); 
   MPI_Comm_size(MPI_COMM_WORLD,&numprocs); 
   MPI_Comm_rank(MPI_COMM_WORLD,&myid); if (myid==0) {
      n = atoi(argv[1]);
      printf("\n N=%d\nAngulo: %s, %s, %s",n, argv[2], argv[3], argv[4]); 
   }
   MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);
   // serie_seno
   double seno, h, mySeno;
   h = 1.0 / (double) n;
   seno = 0.0;
   double a = ang * h;
   for(i = myid+1; i <= n; i += numprocs){
      printf("\nproc %i a: %f\n", myid, ang);
      double r;
      r = (power(-1, (i-1)) * power(a, 2*(i-1) + 1) / fatorial(2*(i-1) + 1));
      printf("\nproc %i sen: %f\n", myid, r);
      seno += r;
   }
   printf("\nproc %i computes: %.10f\n", myid, seno);
   mySeno = seno;
   // mySeno = serie_seno(ang, n, h);
   // printf("\nmySeno: %f", mySeno);
   MPI_Reduce(&mySeno, &SENO, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
   // MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);
   // // serie_coseno
   // double coseno,  myCosn;
   // coseno = 0.0;
   // for(i = myid+1; i <= n;i+=numprocs){
   //    if (i == 0) {
   //       coseno += 1;
   //       continue;
   //    };
   //    coseno += power(-1, i) * power(ang, 2*i) / fatorial(2*i);
   // }
   // myCosn = h*coseno;
   // MPI_Reduce(&myCosn, &COSN, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
   // MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);
   // double myTg;
   // myTg = mySeno/myCosn;
   // MPI_Reduce(&myTg, &TG, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
   if (myid == 0) {
      tempoF=MPI_Wtime();
      printf("\n Tempo Decorrido:\n%.10f\n",fabsf(tempoI-tempoF));
      printf("\nseno:\n%.20f", SENO);
      // printf("\nseno:\n%.20f\ncosn:\n%.20f\ntg:\n%.20f\n", SENO/n, COSN/n, TG/n);
   }
   MPI_Finalize();
   return 0;
}



