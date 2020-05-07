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

double serie_seno(double x, int termos){
   double pi = 3.14159265358979323846;
   int i;
   double resultado;
   resultado = 0;
   x = (x*pi)/180.0;
   for(i = 0; i < termos;i++){
      resultado += power(-1, i) * power(x, 2*i + 1) / fatorial(2*i + 1);
   }
   return (resultado);
}

double seno(){
   double x;
   int termos;
   system("clear");
   printf("****sen(x) pelo polinomio de Taylor****\n\n");
   printf("Digite o numero de termos da sequencia: " );
   scanf("%d", &termos);
   printf("\nDigite o valor de x para o calculo do sen(x), x = ");
   scanf("%lf", &x);
   printf("\n\nO resultado e: %1.15lf\n\n", serie_seno(x, termos));
   getchar();
   return 0;
}

int main(){
   seno();
   return 0;
}