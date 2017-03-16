
## reconhecimento de um numero primo

Para saber se um numero eh primo, dividimos esse numero pelos numeros primos 2,3,5,7,11,13 etc ate que tenhamos:

> Uma divisao com resto zero;
> Uma divisao com quociente menor que o divisor e o resto diferente de zero;

Exemplo:
a) Numero 161
161/2: nao eh par;
161/3: 1+6+1 = 8 (nao eh divisivel por 3);
161/5: nao termina em 0 ou 5;
161/7: 23, resto 0 - entao 161 nao eh primo;

b) Numero 113
113/2: nao eh par;
113/3: 1+1+3 = 5 (nao eh divisivel por 3);
113/5: nao termina em 0 ou 5;
113/7: 16, resto 1; 16>7 (quociente eh maior que o divisor);
113/11: 10, resto 3; 10<11

> COMO O QUOCIENTE EH MENOR QUE O DIVISOR (10<11) O NUMERO 113 EH PRIMO

#### Exercicio:
1) Aplicar o algoritmo de reconhecimento de numero primo em cada caso abaixo:
a)191
b)281

a)RESOLUCAO
```shell
191/2: n par;
191/3: 1+9+1: 11 (nao divisivel por 3);
191/5: nao termina em 0 ou 5;
191/7: 27, resto 2; 27>7;
19\'1 | 7
 51  ____
  2 |27
191/11: 17, resto 4; 17>11;
19\'1\' | 11
 81   ____
  4   |17
191/13: 14 resto 9; 14>13;
19\'1\' | 13
 61   ____
-52   |14
  9
191/17: 11, resto 4; 11<17 - ENTAO EH PRIMO
19\'1\' | 17
 21   ____
  4   |11
```

b) RESOLUCAO
```shell
281/2: n par;
281/3: 2+8+1= 11;
281/5: n termina em 0 nem 5;
281/7: 40, resto 1; 40>7; (quociente maior que o divisor);
281/11: 25, resto 6; 25>11;
281/13: 21, 8; 21>13;
281/17: 16, 9: 16<17; > NUMERO EH PRIMO
```

__________________________
## ALGORITMO DE EUCLIDES
> Dados dois inteiros a e b, com b>0, existe um unico par de inteiros q e r, com 0<=r<b tais que: a = q.b + r

## TEOREMA DA ARITMETICA
> todo numero inteiro maior ou igual a 2 pode ser escrito como o produto de numeros primos.

obs:
70|2            48|2
35|5            24|2
 7|7            12|2
 1 <<<<<         6|2
                 3|3
                 1 <<<<<
Exemplo:
- 2100 = 2ˆ2 x 3 x 5ˆ2 x 7

