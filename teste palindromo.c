#include <stdio.h>		// biblioteca padrão de entrada e saida 
#include <stdlib.h>		//biblioteca que funciona como emulador da prompt do sistema operaconal, no windows ele emula todos os comandos do DOS
#include <string.h>		//bibloteca para manipular strings
#include <ctype.h>
#define N 80	//definição do tamanho maximo do vetor

int main ()
{
	char wordum[N], wordois[N];		//criando dois vetores para fazer a comparação 
	char palavra[N]; 		//variavel auxiliar 
	int i, f, g; 		//variavel auxiliar 

	f=0;
	scanf ("%s", &wordum);		// entrada da palavra a ser comparada 

	 for (g=0; g <= wordum[N]; i++)
	 	palavra[g] = tolower ( wordum[g] );

	strcpy (wordois, palavra);	//aqui a palavra é copiada para outro vetor para ser invertida

	strlen (palavra);	//comando para quantificar os índices para poder inverter a palavra 
	for (i=strlen (palavra)-1; i >= 0; i--)	 // laço para inverter a ordem da palavra 
	{
		wordois[f] = palavra[i];		// aramazenando os caracteres da palavra na ordem invertida 
		f++;	//incremento da variavel f para o auxilio do armazenamento acima 
		wordois[f] = '\0';		//acrescimo do \0 para não dar errado na compilação e manter a ordem lógica
	} 

	if (strcmp (wordois, palavra) == 0 ) // USAR strcmp que compara strings 
	{
		printf("Esta palavra e um palindromo" );
	} else 
		printf("Esta palavra nao e um palindromo" );

 return 0;
}

