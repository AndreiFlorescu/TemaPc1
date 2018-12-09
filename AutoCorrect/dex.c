/* Functiile pentru rezolvarea task 3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dex.h"

// Rezolvarea taskului 3
void solveTask3 (char *sir, dex *cuv, int n, char *sol) {
	int i;
	char *p;
	int flag;

	if (n == 0) {
		strcpy(sol, sir);
		return;
	}

	p = strtok(sir, " ");

	/* Trecem prin sir cuvant cu cuvant si verificam daca acesta apare in dictionar
	   Daca da il inlocuim, daca nu salvam cuvantul actual si trecem la urmatorul */
	while (p != NULL) {
		flag = 0;
		for (i = 0; i < n; ++i) {
			if (!strcmp(p, cuv[i].old)) {
				flag = 1;
				break;
			}
		}

		if (flag) {
			strcat(sol, cuv[i].new);
		} else {
			strcat(sol, p);
		}

		p = strtok(NULL, " ");
		if (p != NULL) {
			strcat(sol, " ");
		}
	}
}