/* Functiile pentru rezolvarea task 2 */

#include <stdio.h>
#include <string.h>
#include "decode.h"

void solveTask2(char *sir, char telef[][5], char *sol) {
	int i = 0;
	int l = strlen(sir);
	int upper;
	int act, count;
	int poz = 0;

	while (i < l) {
		upper = 0;
		while (sir[i] == '0') {
			sol[poz++] = ' ';
			i++;
		} 

		if (sir[i] == '1') {
			upper = 1;
			i++;
		}
		
		if (sir[i] == '#') {
			i++;
		}

		act = sir[i] - '0';
		count = 0;

		while (i + 1 < l && sir[i + 1] == sir[i]) {
			count++;
			i++;
		}

		if (act == 7 || act == 9) {
			count %= 4;
		} else {
			count %= 3;
		}

		sol[poz] = telef[act][count];
		if (upper) {
			sol[poz] -= 32;
		} 
		poz++;
		
		i++;
	}

}
