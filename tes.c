#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    int** matuni ;                   //variavel que vai receber a matriz 
    int lin = 2 , col = 1 ;         //variaveis para o numero de colunas e linhas 
    int igual = 1 ;                 //variavel auxiliar para condição 

    //scanf("%d", &lin ); scanf("%d", &col );
    

    matuni = (int**) malloc(lin*sizeof (int*)) ;         //alocação dinamica para criação do numero de linhas de acordo com a entrada 

    if (matuni == NULL){                                   //condição de verificação para checar a alocação dinamica 
        printf("erro 1");
    }

    for (int i = 0 ; i < lin; i++){                         //laço para criar ponteiro apontando para a alocação criada 
        matuni[i] = (int*) malloc (col*sizeof (int));
            if (matuni[i] == NULL){                              //condição de verificação da alocação 
                printf("erro 2");
            }

             for (int i = 0; i < lin||i<col; i++){                            //for aninhados para entrada dos valores
                for (int j = 0; j < col||i<lin; j++){
                    scanf("%d", &matuni[i][j]); 
                }
            }          
    }  

   
    

   return 0;   
}