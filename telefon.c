/*--------------------------------
	Subiect:	Tema 1 - PC
	Autor:		Andrei Florescu
	Grupa:		315 CC
--------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include "Util/init.h"
#include "Codif/encode.h"
#include "Decodif/decode.h"

int main () {

// Citiri -----------------------------------------------------
// Task 1 -----------------------------------------------------
	char *sir1 = calloc (101, sizeof(char));
	readTask1(sir1);		// Citirea sirului pentru cerinta 1

// Task 2 -----------------------------------------------------
	char *sir2 = calloc (301, sizeof(char));
	readTask2(sir2);		// Citirea sirului pentru cerinta 2


// Rezolvari --------------------------------------------------
// Task 1 -----------------------------------------------------	
	char* sol1 = calloc (301, sizeof(char));
	solveTask1(sir1, sol1);		// Rezolvarea primei cerinte 

// Task 2 -----------------------------------------------------
	char telef[10][5];
	initTastaturaTask2(telef);

	char *sol2 = calloc (101, sizeof(char));
	solveTask2(sir2, telef, sol2);


// Printari solutii -------------------------------------------
// Task 1 -----------------------------------------------------
	printSolTask1(sol1);			// Afisarea solutie task 1

// Task 2 -----------------------------------------------------
	printSolTask2(sol2);			// Afisarea solutie task 2
	
	return 0; 
}