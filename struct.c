#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float Dist = 0 ;
	typedef struct ponto	// criando a definição para ser criado viriaveis de estrutura nesses parâmetros 
							
	{
		float x ;		// membro tipo ponto flutuante para armazenar os valores 
		float y ;		// segundo membro tipo ponto flutuante para armazenar os valores a serem comparados 

	} Ponto ;		// uso do typedef para criação de variaveis de estruturas com a palvra "Ponto"
	 
	Ponto A ;		// variaveis estruturais para o teste de distância euclidiana 
	Ponto B ;

	scanf (" %f %f", &A.x , &A.y );		// entrada dos valores na estrutura Ponto A
	scanf (" %f %f", &B.x , &B.y );		// entrada dos valores na estrutura Ponto B

	Dist = sqrt ( pow (A.x - B.x ,2) + pow (A.y - B.y ,2 ));
	 
	if ( Dist <= 0.0000001 )
	{
		printf ("os pontos sao iguais");

	} else 
	 	printf ("os pontos nao sao iguais");

	return 0 ;  
}