#include <stdio.h>		// biblioteca padrão de entrada e saida 
#include <stdlib.h>		//biblioteca que funciona como emulador da prompt do sistema operaconal, no windows ele emula todos os comandos do DOS
#include <string.h>		//bibloteca para manipular strings
#define N 80	//definição do tamanho maximo do vetor

int main ()
{
	char word [N];		//criando um vetor para armazenar os caracteres
	int i;		//variavel auxiliar para percorrer os índices do vetor
	char palavra;	//variavel de controle    

	fgets (word, N , stdin);	//comando para armazenar strings com espaços burlando o \o
	scanf("%s", word ); 		//entrada da palavra 
	
	palavra = strlen (word);	//uso do comando strlen para guardar a quantidade de caracteres 
	for (i=palavra-1; i >= 0; i--)	//laço para inversão dos caracteres 
		printf("%c", word[i] );	//impressão dos caracteres de ultimo para o primeiro 

	return 0;
}