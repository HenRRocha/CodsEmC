#include <stdio.h>		// biblioteca padrão de entrada e saida 
#include <stdlib.h>		//biblioteca que funciona como emulador da prompt do sistema operaconal, no windows ele emula todos os comandos do DOS
#include <string.h>		//bibloteca para manipular strings
#include <ctype.h>		//bibloteca para manipular caracteres
#define N 80	//definição do tamanho maximo do vetor

int main ()
{
	char palavra[N], palavraminuscula[N], palavrainversa[N], palavraconta[N];	//criação dos vetores necessarios para o armazenamento das strings
	int i, f, g=0;	//criação das variáveis auxiliares necessárias 

	scanf ("%s", palavra); 	//entrada da palavra a ser testada ERRO AQUI OBS:TALVEZ EU ARRUMEI NÃO SEI RS TEM QUE TESTAR 	

	for (f=0; f <= palavra[f]; f++)		//laço para converter todos os caracteres da string para letras minúsculas		
	 	palavraminuscula[f] = tolower ( palavra[f] );		// uso do comando tolower para manipulação de caracteres 

	strcpy (palavraconta, palavraminuscula);		//aqui é feito uma copia da string para outro vetor 	

	for (i=strlen (palavraminuscula)-1; i >= 0; i--)	//laço para inversão da string
	{
		palavrainversa[g] = palavraminuscula[i];	//armazenamento dos caracteres na ordem invertida 		 
		g++;										//incremento da varialvel para seguir a logica de armazenamento 
	}

	palavrainversa[g] = '\0';		//incluindo o "\0" para seguir a lógica de armazenar da linguegem 

	if (strcmp (palavrainversa, palavraminuscula) == 0 )		//aqui a condição com o uso do comando strcmp para camparar as strings 
	{
		printf("Esta palavra e um palindromo" );
	} else 													//outra condição para seguir a lógica desejada do teste de palavras 
		printf("Esta palavra nao e um palindromo" );



		 


return 0; 
}	 