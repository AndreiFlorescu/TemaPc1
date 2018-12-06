/* Functiile pentru rezolvarea task 1 */

#include <stdio.h>
#include <string.h>
#include "encode.h"

void solveTask1 (char *sir, char *sol) {
	int poz = 0;
	int l = strlen(sir);
	int i, j;
	
	int prec = 1, flag;

	for (i = 0; i < l; ++i) {
		flag = 0;

		if (sir[i] == ' ') {
			sol[poz++] = '0';
			prec = 0;
			continue;
		}

		if (sir[i] >= 'A' && sir[i] <= 'Z') {
			sol[poz++] = '1';
			sir[i] += 32;
			flag = 1;
		}

		if (sir[i] == 's') {
			if (prec == 7 && flag != 1) {
				sol[poz++] = '#';
			}	

			for (j = 0; j < 4; ++j) {
				sol[poz++] = '7';
			}

			prec = 7;
			continue;
		}

		if (sir[i] == 'z') {
			if (prec == 9 && flag != 1) {
				sol[poz++] = '#';
			}

			for (j = 0; j < 4; ++j) {
				sol[poz++] = '9';
			}

			prec = 9;
			continue;
		}

		if (sir[i] > 's') {
			sir[i]--;
		}

		int act = (sir[i] - 'a') / 3;
		int loc = (sir[i] - 'a') % 3;
		act += 2; 

		if (act == prec && flag != 1) {
			sol[poz++] = '#';
		}

		for (j = 0; j <= loc; ++j) {
			sol[poz++] = act + '0';
		}

		prec = act;
	} 
}
