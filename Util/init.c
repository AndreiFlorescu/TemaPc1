/* Functiile care se ocupa de citire, afisarea si initializarea */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "init.h"

// Printarea sirurilor solutie ------------------
void printSolStr (char *sir) {
	puts(sir);
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
		cuv[i].old = calloc (101, sizeof(char));
		cuv[i].new = calloc (101, sizeof(char));
		scanf ("%s %s", cuv[i].old, cuv[i].new);
		l = strlen(cuv[i].old);
		cuv[i].old = realloc (cuv[i].old, (l + 1) * sizeof(char));
		l = strlen(cuv[i].new);
		cuv[i].new = realloc (cuv[i].new, (l + 1) * sizeof(char));
	}
	scanf ("\n");
}

// Eliberarea memoriei vectorului dex
void freeDex (dex *cuv, int n) {
	int i;
	for (i = 0; i < n; ++i) {
		free(cuv[i].old);
		free(cuv[i].new);
	}
	free(cuv);
}