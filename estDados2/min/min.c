#include <stdio.h>
#include <stdlib.h>
#include "min.h"

#define DAD(i) (i / 2)

Pl* createsPriorityList(int t) {
	Pl* prioList = (Pl*) malloc(sizeof(Pl));
	prioList->v = (Item*) malloc(t * sizeof(Item));
	prioList->n = 0;
	prioList->size = t;
	return prioList;
}

void insertsOnList(Pl* pl , Item i) {
	pl->v[pl->n] = i;
	pl->n++;
	priority_up(pl, pl->n - 1);
}

void removeTop(Pl* pl) {
	pl->v[0] = pl->v[pl->n-1];
	pl->n--;
	priority_up(pl, 0);
}

Item topElement(Pl* pl) {
	return pl->v[0];
}

int left(int pos) {return (2*pos);}
int right(int pos) {return (2*pos)+1;}


void priority_up(Pl* fp, int n) {
	int pai = DAD(DAD(n));
	if (n == 0) {return;};
	if (fp->v[pai].key > fp->v[n].key) {
		change(&fp->v[pai], &fp->v[n]);
		priority_up(fp, pai);
	}
}


void change(Item* a, Item* b) {
	Item c = *a;
	*a = *b;
	*b = c;
}

void printTree(Pl* pl) {
	int i = 0;
	printf("\n");
	for (i = 0 ; i < pl->n ; i++) {
		printf("Posicao: %d    |    key: %d\n", i, (pl->v[i]).key);
	}
}