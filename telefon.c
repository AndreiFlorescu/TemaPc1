#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Util/init.h"
#include "Codif/encode.h"

int main () {
	char sir[101];
	readTask1(sir);

	char sol[301] = {};
	solveTask1(sir, sol);

	printSolTask1(sol);

	return 0; 
}