Teoria dos grafos

um grafo e uma estrutura que tem pontos e ligacoes, os ptos tb sao chamados de vertices ou nós.

as ligacoes podem ser:
- ORIENTADA: nesse caso temos arcos, sendo que cada arco tem uma origem e um destino especificos. É representada por uma seta.
- NÃO ORIENTADA: nesse caso temos arestas, nas quais nao ha restricao sobre origem/destino. Na verdade ela é "duplamente orientada", pois vai e volta . É representada por uma linha cheia.

A ordem de um grafo corresponde a quantidade de nos que ele apresenta, sendo indicada por n. 

É possível e podemos comecar por qualquer nó.

O grau do nó x é designado por d(xi) e indica quantas ligacoes estao associadas a esse nó.

Respondendo a pergunta de euler para um grafo qualquer de ordem n:
-> é possível se todos os nos tiverem grau pai. Nesse caso, podemos comecar por qualquer nó.
-> é possível se (n-2) nós tiverem grau par, começando o percurso por um dos 2 nos de grau impar e terminando no outro de grau impar.
-> impossível em qualquer outro caso.

--------

Um grafo pode ser representado por diagrama ou por matrizes. Considere o seguinte grafo orientado:
x1  -   x3
|   /   |
x2  -   x4

Vamos representar esse grafo usando uma MATRIZ DE ADJACENCIAS. É uma matriz quadrada de ordem n, composta por 0 e 1, sendo:
- 1 se existir ligacao (xi, xj)
- 0 se nao existir ligacao (xi, xj)

         x1     x2     x3      x4 
    x1 | 0      1       1       0 |     OBS: a linha indica a EMISSAO 
    x2 | 1      0       0       1 |
A = x3 | 0      1       1       1 |
    x4 | 0      0       0       0 |


Para cada grafo:



