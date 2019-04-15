#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "max.h"

int main(int argc, char *argv[]) {
	int j;
	Item i;
	Pl* p = createsPriorityList(10);
	for (j = 0 ; j < 10 ; j++) {
		strncpy(i.name, "...", 20);
        if (j > 5) {
            i.key = j*10;
        } else {
            i.key = j;
        }
		insertsOnList(p, i);
	}
	printTree(p);
	return 0;
}