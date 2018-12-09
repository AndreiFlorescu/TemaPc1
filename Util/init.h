/* Headerul care contine functiile de citire, afisarea si initializarea - INIT */

#ifndef INIT
#define INIT

#include "defTypes.h"

void printSolStr (char *);
void readStr (char *, int n);

void initTastaturaTask2 (char mtr[][5]);

void readDex (dex *, int n);
void freeDex (dex *, int n);

#endif