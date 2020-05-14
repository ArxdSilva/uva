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

double serie_seno(double ang, int termos){
   int i;
   double resultado;
   resultado = 0;
   for(i = 0; i < termos;i++){
      resultado += power(-1, i) * power(ang, 2*i + 1) / fatorial(2*i + 1);
   }
   return (resultado);
}

double serie_coseno(double ang, int termos){
   int i;
   double resultado;
   resultado = 0;
   for(i = 0; i < termos;i++){
      if (i == 0) {
         resultado += 1;
         continue;
      };
      resultado += power(-1, i) * power(ang, 2*i) / fatorial(2*i);
   }
   return (resultado);
}

double tg(double ang, int n){
   double sen = serie_seno(ang, n);
   double cosen = serie_coseno(ang, n);
   printf("\nO resultado sen e: \n%1.15lf\nsin:\n%1.15lf\nerro:\n%1.15lf\n", sen, sin(ang), (sin(ang)-sen));
   printf("\nO resultado cosen e: \n%1.15lf\ncos:\n%1.15lf\nerro:\n%1.15lf\n", cosen, cos(ang), (cos(ang)-cosen));
   printf("\nO resultado tg e: \n%1.15lf\ntan:\n%1.15lf\n\nerro:\n%1.15lf\n", sen/cosen, tan(ang), (tan(ang)-(sen/cosen)));
   // printf("\nO resultado cosen e: %1.15lf\n", cosen);
   // printf("\nO resultado tg e: %1.15lf\n", sen/cosen);
   // printf("\nO resultado tg e: %1.15lf\n", sen/cosen);
   return 0;
}

int main(int argc, char *argv[]){
   int n = atoi(argv[1]);
   double pi = 3.14159265358979323846;
   double ang=0.0;
   ang = (double) (atof(argv[2]) + (atof(argv[3])/60.0) + (atof(argv[4])/3600.0));
   ang = (ang*pi)/180.0; // angulo em radianos
   tg(ang, n);
   // seno();
   // coseno();
   return 0;
}