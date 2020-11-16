#include <stdio.h>
#include <stdlib.h>

float fatorial(int n) { // Supoe n>=0
	long int resultado;
	if (n==0 || n==1) {
		resultado=1;
	} else {
		resultado=n * fatorial(n-1);	
	}
	return resultado;
}

int main(int argc, char *argv[]) {
	int i;
	for (i=0; i<15; i++) {
		printf("%d! = %f\n", i, fatorial(i));
    }
	return 0;
}