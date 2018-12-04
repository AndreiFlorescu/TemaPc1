/*--------------------------------
	Subiect:	Tema 1 - PC
	Autor:		Andrei Florescu
	Grupa:		315 CC
--------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util/init.h"
#include "Codif/encode.h"
#include "Decodif/decode.h"
#include "AutoCorrect/dex.h"

int main () {
// Citiri -----------------------------------------------------
// Task 1 -----------------------------------------------------
	char *sir1 = calloc (101, sizeof(char));
	readStr(sir1, 101);		// Citirea sirului pentru cerinta 1

// Task 2 -----------------------------------------------------
	char *sir2 = calloc (301, sizeof(char));
	readStr(sir2, 301);		// Citirea sirului pentru cerinta 2

// Task 3 -----------------------------------------------------
	char *sir3 = calloc (101, sizeof(char));
	readStr(sir3, 101);
	int n;
	scanf ("%d", &n);
	
// Task 4 -----------------------------------------------------



// Rezolvari --------------------------------------------------
// Task 1 -----------------------------------------------------	
	char* sol1 = calloc (301, sizeof(char));
	solveTask1(sir1, sol1);		// Rezolvarea primei cerinte 

// Task 2 -----------------------------------------------------
	char telef[10][5];
	initTastaturaTask2(telef);

	char *sol2 = calloc (101, sizeof(char));
	solveTask2(sir2, telef, sol2);

// Task 3 -----------------------------------------------------
	char *sol3 = calloc (101, sizeof(char));
	solveTask3 (sir3, n, sol3);

// Task 4 -----------------------------------------------------



// Printari solutii -------------------------------------------
// Task 1 -----------------------------------------------------
	printSolStr(sol1);			// Afisarea solutie task 1

// Task 2 -----------------------------------------------------
	printSolStr(sol2);			// Afisarea solutie task 2

// Task 3 -----------------------------------------------------
	printSolStr(sol3);			// Afisarea solutie task 3

// Task 4 -----------------------------------------------------

	return 0; 
}