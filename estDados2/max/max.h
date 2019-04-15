#ifndef _MAX_H_
#define _MAX_H_

typedef struct item {
	int key;
	char name[20];
}Item;

typedef struct pl{
	int n, size;
	Item* v;
} Pl;

Pl* createsPriorityList(int t);
void insertsOnList(Pl* pl , Item i);
void printTree(Pl* pl);
void removeTop(Pl* pl);
Item topElement(Pl* pl);

#endif
