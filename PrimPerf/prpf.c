#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "prpf.h"

int cmp (const void *a, const void *b) {
	return ( *(int *) b - *(int *) a );
}

int isPrime (long long n, int dim, long long *comp) {
	long long i, j;
	int count;
	for (i = 2; i <= n; ++i) {
		count = 0;
		for (j = 0; j < dim; ++j) {
			if (comp[j] % i == 0) {
				count++;
			}
		}
		if (count > 1) {
			return 0;
		}
	}
	return 1;
}

void solveTask4 (char *sir) {
	int i;
	int n = 0, k = 0, count = 0;
	int l = strlen(sir);
	int poz;
	long long *comp = malloc (5 * sizeof(long long));

	long long max = 0, act = 0;
	long long min = LLONG_MAX;

	for (i = 0; i < l; ++i) {
		if (sir[i] != '#') {
			n += sir[i] - '0';
			count++;
			if (sir[i] == '0') {
				if (act < min) {
					min = act;
				}
				if (act > max) {
					max = act;
					poz = k; 
				}
				comp[k++] = act;
				act = 0;
			} else {
				act *= 10;
				act += sir[i] - '0';
			}
		}
	}

	if (act > max) {
		max = act;
		poz = k; 
	}
		
	comp[k++] = act;

// Afisarea numarului de componente
	printf ("%d\n", k);

// Afisarea componentelor
	for (i = 0; i < k; i++) {
		printf ("%lld ", comp[i]);
	}

// Afisarea componentei maxime si pozitia acesteia
	printf ("\n%lld %d\n", max, poz + 1);

// Afisarea daca numerele sunt prime intre ele
	printf ("%d\n", isPrime(min, k, comp));

	n %= 9;
	if (n == 0 || count % n != 0) {
		printf ("0\n");
	} else {
		count = 0;
		act = 0;
		poz = 0;
		int *magicN = malloc (51 * sizeof(int));
		for (i = 0; i < l; ++i) {
			if (sir[i] != '#') {
				act *= 10;
				act += sir[i] - '0';
				count++;
				if (count == n) {
					magicN[poz++] = act;
					act = 0;
					count = 0;
				}
			}
		}
		
		qsort(magicN, poz, sizeof(int), cmp);

		for (i = 0; i < poz; ++i) {
			printf ("%d ", magicN[i]);
		}
		printf ("\n");
	}
	
	free(comp);
	free(magicN);
}