#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	int l = strlen(sir);
	sir[l - 1] = '\0';
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

// Task 3 ---------------------------------------
// Citirea dictionarului
void readDex (dex *cuv, int n) {
	int i, l;
	for (i = 0; i < n; ++i) {
		cuv[i].old = malloc (101 * sizeof(char));
		cuv[i].new = malloc (101 * sizeof(char));
		scanf ("%s %s", cuv[i].old, cuv[i].new);
		l = strlen(cuv[i].old);
		cuv[i].old = realloc (cuv[i].old, l * sizeof(char));
		l = strlen(cuv[i].new);
		cuv[i].new = realloc (cuv[i].new, l * sizeof(char));
	}
	scanf ("\n");
}