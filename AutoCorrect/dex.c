/* Functiile pentru rezolvarea task 3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dex.h"

typedef struct {
	char *old;
	char *new;
} dex;

void solveTask3 (char *sir, int n, char *sol) {
	dex *cuv = malloc ((n + 1) * sizeof(dex));

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

	l = strlen(sir);
	sir[l - 1] = ' ';

	char *p;
	int flag;

	p = strtok(sir, " ");

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