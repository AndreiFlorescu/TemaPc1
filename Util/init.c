#include <stdio.h>
#include <string.h>
#include "init.h"

// Printarea sirurilor solutie ------------------
void printSolStr (char *sir) {
	int i;
	int l = strlen(sir);

	for (i = 0; i < l; ++i) {
		printf ("%c", sir[i]);
	}
	printf ("\n");
}

// Citirea sirurilor ----------------------------
void readStr (char *sir, int dim) {
	fgets(sir, dim, stdin);
}

// Task 2 ---------------------------------------
// Initializarea tastaturii telefonului 
void initTastaturaTask2 (char mtr[][5]) {
	int i, j;
	int num = 'a';
	for (i = 2; i < 10; ++i) {
		int dim = 3;
		if (i == 7 || i == 9) {
			dim = 4;
		}
		for (j = 0; j < dim; ++j) {
			mtr[i][j] = num++;
		}
	}
}