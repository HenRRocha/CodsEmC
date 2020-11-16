#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int n, int *v, int ini, int fim) {
	int indice;
	printf("Procurando por %d em v[%d ... %d]...\n", n, ini, fim);
	if (fim<ini) {
		indice=-1; // ou seja, numero nao encontrado
	} else {
		int meio = (ini+fim)/2;
		printf("meio = %d, v[meio]= %d \n", meio, v[meio]);
		if (n==v[meio]) {
			indice = meio;
		} else if (n<v[meio]) {
			indice = busca_binaria(n,v,ini,meio-1);	
		} else { // n>v[meio]
			indice = busca_binaria(n,v,meio+1,fim);	
		}
	}
    printf("Resposta = indice %d \n",indice);
	return indice;
}
int main(int argc, char *argv[]) {
	
	int w[10] = {10,13,16,23,34,56,79,81,85,100};
	int n;
	printf("Insira numero a buscar no vetor: \n");
	scanf("%d",&n);
	int indice;
	indice = busca_binaria(n,w,0,9);
	// busca_binaria(n,w) --> como fazer assim?
	if (indice==-1) {
		printf("A busca não encontrou o valor procurado.");
	} else {
		printf("O numero foi encontrado na posicao %d",indice);
	}
	return 0;
}