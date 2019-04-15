#include <stdio.h>
#include <stdlib.h>
#include "min.h"

#define DAD(i) ((i-1) / 2)

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
	if ((fp->v[n].key > fp->v[left(n)].key) || (fp->v[n].key > fp->v[right(n)].key)) {
		if (fp->v[left(n)].key > fp->v[right(n)].key) {
			change(&fp->v[n], &fp->v[left(n)]);
			priority_up(fp, left(n));
		} else if (fp->v[right(n)].key > fp->v[left(n)].key) {
			change(&fp->v[n], &fp->v[right(n)]);
			priority_up(fp, right(n));
		}
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