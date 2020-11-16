#include <stdio.h>      //biblioteca padrão de entrada e saida 
#include <stdlib.h>     //biblioteca padrão para ajuda de compilação em windows 
#include <math.h>       //biblioteca padrão para o uso de funções matematicas 

int main ()
{
	typedef struct ponto	// criando a definição para ser criado viriaveis de estrutura nesses parâmetros 
							
	{
		int x ;		// membro tipo ponto flutuante para armazenar os valores 
		int y ;		// segundo membro tipo ponto flutuante para armazenar os valores a serem comparados 

	} Ponto ;		// uso do typedef para criação de variaveis de estruturas com a palvra "Ponto"
	 
	Ponto A ;		// variaveis estruturais para o teste de distância euclidiana 
	Ponto B ;
    Ponto C ;
    Ponto D ;
    

	scanf (" %d %d", &A.x , &A.y );   //entreda dos valores nas respectivas variaveis   
	scanf (" %d %d", &B.x , &B.y );		
    scanf (" %d %d", &C.x , &C.y );	
	scanf (" %d %d", &D.x , &D.y );	

    if ((B.x - A.x) >= ( D.x - C.x ) && (B.y - A.y) >= (D.y - C.y)) //devio condicional para o teste dos valores 
    {
        printf ("o segundo retangulo esta contido no primeiro");
    } else 
        printf ("o segundo retangulo nao esta contido no primeiro");

    
	return 0 ;  
}
