#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "min.h"

int main(int argc, char *argv[]) {
	int j;
	Item i;
	Pl* p = createsPriorityList(10);
	for (j = 0 ; j < 10 ; j++) {
		printf("\nDigite algo:\n");
		strncpy(i.name, "...", 20);
		scanf("%d", &i.key);
		insertsOnList(p, i);
	}
	printTree(p);
	return 0;
}