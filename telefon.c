/*----------------------------------
	Subiect:	Tema 1 - Telefon  
	Autor:		Andrei Florescu
	Grupa:		315 CC
----------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util/init.h"
#include "Util/defTypes.h"
#include "Codif/encode.h"
#include "Decodif/decode.h"
#include "AutoCorrect/dex.h"
#include "PrimPerf/prpf.h"


int main () {
// Citiri -----------------------------------------------------
// Task 1 -----------------------------------------------------
	char *sir1 = calloc (101, sizeof(char));
	char* sol1 = calloc (301, sizeof(char));

	readStr(sir1, 101);		// Citirea sirului pentru cerinta 1

// Task 2 -----------------------------------------------------
	char *sir2 = calloc (301, sizeof(char));
	char *sol2 = calloc (101, sizeof(char));

	readStr(sir2, 301);		// Citirea sirului pentru cerinta 2

// Task 3 -----------------------------------------------------
	char *sir3 = calloc (101, sizeof(char));
	int n;
	char *aux = calloc (101, sizeof(char));
	char *sol3 = calloc (301, sizeof(char));

	readStr(sir3, 101);
	scanf ("%d", &n);
	dex *cuv = malloc ((n + 1) * sizeof(dex));
	readDex(cuv, n);
	
// Task 4 -----------------------------------------------------
	char *sir4 = calloc (101, sizeof(char));
	char *cod = calloc (301, sizeof(char));

	readStr(sir4, 101);


// Rezolvari --------------------------------------------------
// Task 1 -----------------------------------------------------	
	solveTask1(sir1, sol1); 

// Task 2 -----------------------------------------------------
	char telef[10][5];
	initTastaturaTask2(telef);

	solveTask2(sir2, telef, sol2);

// Task 3 -----------------------------------------------------
	solveTask3 (sir3, cuv, n, aux);
	solveTask1(aux, sol3);

// Task 4 -----------------------------------------------------
	solveTask1(sir4, cod);


// Afisari solutii --------------------------------------------
// Task 1 -----------------------------------------------------
	printSolStr(sol1);
	free(sir1);
	free(sol1);

// Task 2 -----------------------------------------------------
	printSolStr(sol2);
	free(sir2);
	free(sol2);

// Task 3 -----------------------------------------------------
	printSolStr(sol3);
	free(sir3);
	freeDex(cuv, n);
	free(aux);
	free(sol3);

// Task 4 -----------------------------------------------------
	solveTask4(cod);		// Afisarea se realizeaza in rezolvare
	free(sir4);				
	free(cod);

	return 0; 
}
