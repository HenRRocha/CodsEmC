#include <stdio.h>		// biblioteca padrão de entrada e saida 
#include <stdlib.h>		//biblioteca que funciona como emulador da prompt do sistema operaconal, no windows ele emula todos os comandos do DOS 			
#define N 20	//definição do tamanho maximo do vetor 

int main ()
{
	int nlinhas, ncolunas;	//criação das variaveis do numeros de linhas e colunas da matriz 
	int matriz [N][N] ;	//vetor para receber os valores que sera escrito na matriz 
	int i, f;	//varial auxiliar          

	scanf (" %d %d", &nlinhas, &ncolunas);	//entrada dos valores de linhas e colunas 

	for ( i=0; i<nlinhas; i++ ){				// laço para entrada dos valores na matriz 				INACABADO!!!!!!!!
		for ( f=0; f<ncolunas; f++ )
			 scanf ("%d", &matriz[ i ][ f ]);

	}

	for (i=0; i < ncolunas; i++){			//laço para impressão da matriz transposta 
		for (f=0; f < nlinhas; f++)
			printf(" %d ", matriz [f] [i] );
		 printf("\n");
	}
      
    

 return 0;
}

