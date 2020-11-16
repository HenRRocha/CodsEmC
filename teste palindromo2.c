#include <stdio.h>		// biblioteca padrão de entrada e saida
#include <stdlib.h>		//biblioteca que funciona como emulador da prompt do sistema operaconal, no windows ele emula todos os comandos do DOS
#include <string.h>		//bibloteca para manipular strings
#include <ctype.h>		//bibloteca para manipular caracteres
#define N 80	//definição do tamanho maximo do vetor

int main ()
{
	char palavra[N], palavraminuscula[N], palavrainversa[N];	//criação dos vetores necessarios para o armazenamento das strings
	int i, f, g=0;											//criação das variáveis auxiliares necessárias

	scanf ("%s", &palavra); 	//entrada da palavra a ser testada

	for (f=0; f <= palavra[N]; f++)						//laço para converter todos os caracteres da string para letras minúsculas
	 	palavraminuscula[f] = tolower ( palavra[f] );		// uso do comando tolower para manipulação de caracteres

	strcpy (palavrainversa, palavraminuscula);		//aqui é feito uma copia da string para outro vetor

	printf("%s\n", palavrainversa );

return 0;
}
