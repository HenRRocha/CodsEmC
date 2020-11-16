#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    int** matuni ;                   //variavel que vai receber a matriz 
    int lin = 0 , col = 0 ;         //variaveis para o numero de colunas e linhas 
    int igual = 1 ;                 //variavel auxiliar para condição 

    scanf("%d %d", &lin, &col );

    matuni = (int**) malloc(lin*sizeof(int*)) ;         //alocação dinamica para criação do numero de linhas de acordo com a entrada 

    if (matuni == NULL){                                   //condição de verificação para checar a alocação dinamica 
        printf("erro 1");
    }

    for (int i = 0 ; i < lin; i++){                         //laço para criar ponteiro apontando para a alocação criada 
        matuni[i] = (int*) malloc (col*sizeof(int));
            if (matuni[i] == NULL){                              //condição de verificação da alocação 
                printf("erro 2");
            }         
    }  

    for (int i = 0; i < lin; i++){                            //for aninhados para entrada dos valores
        for (int j = 0; j < col; j++){
            scanf("%d", &matuni[i][j]); 
        }
    } 
  
    if (lin != col){
        printf("Nao eh simetrica");
    }

    int** trap;                                           //criação de um ponteiro apontando para uma variavel que vai armazenar a matriz transposta

    trap = (int**) malloc(lin * sizeof(int*)) ;         //alocação dinamica de um vetor 

    if (trap == NULL){                                   //codição para verificar se alocação foi feita 
        printf("erro 4");
    }

    for (int i = 0 ; i < lin; i++){                         //laço para criação da matriz que recebera a outra transposta 
        trap[i]= (int*) malloc (col * sizeof(int));
            if (matuni[i] == NULL){                              
                printf("erro 5");
            }
    }

    for (int i = 0; i < col; i++){                         //laço para transferir a matriz para uma transposta 
        for(int j = 0; j < lin; j++){
            trap [j][i] = matuni[i][j];
        }
    }

    for (int i = 0; i < col; i++){                         //laço para verificar se as matrizes são iguais pois se sim a matriz é simetrica 
        for(int j = 0; j < lin; j++){
           if(trap [i][j] != matuni[i][j]){
               igual = 0;
           }

        }
    }

    if (igual == 1 ){                               //condição para verificar se é ou não simétrica a matriz em questão 
        printf("Eh simetrica\n");
    }else{
        printf("Nao eh simetrica\n");
    }

     for (int i=0; i<col; i++){
        free(matuni[i]);              
    }

    for (int i=0; i<lin; i++){
        free(matuni[i]);        
    }

    free(matuni);

    for (int i=0; i<col; i++){
        free(trap[i]);        
    }

    for (int i=0; i<lin; i++){
        free(trap[i]);        
    }


    free(trap);



  return 0;   
}