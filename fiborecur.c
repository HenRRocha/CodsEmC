#include <stdio.h>
#include <stdlib.h>
//calculo de fibonacci recursivamente 
int fibonacci(int n) { // Supoe n>=1
	int resultado,a,b;
	if (n==1 || n==2) {
		resultado=1;
	} else {
		a = fibonacci(n-1);
		b = fibonacci(n-2);
		resultado = a + b;
	}
	return resultado;
}
int main(int argc, char *argv[]) {
	int i;
	for (i=1; i<8; i++) {
		printf("fibonacci(%d) = %d \n", i, fibonacci(i));
    }
	return 0;
}