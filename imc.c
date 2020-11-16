#include <stdio.h>      //biblioteca padrão para entrada e saida 
#include <stdlib.h>     //biblioteca para auxilio na compilção no windows 
#include <math.h>       //biblioteca padrão para funções matemáticas basicas


int main ()     //função principal 
{
    float imc = 0 ; //criação da uma varialvel auxiliar para impressão dos dados 

      struct corpo      //definição de uma estrutura a ser criada 
     {
         float altura ; //variaveis criadas para armazenar os valores com seus respectivos tipos
         float peso ;
         char  nome ;

     }Corpo ;

     Corpo ; //nascimento da estrutura nos parâmetros estebelecidos para armazenar os dados a serem calculados 

      scanf (" %f " , &Corpo.altura );   //entrada e armazenamento dos valores nos seus respectivos lugares 
      scanf (" %f " , &Corpo.peso );  
      scanf (" %c " , &Corpo.nome ); 

    imc = ( Corpo.peso / ( Corpo.altura * Corpo.altura)) ; //varial auxiliar recebendo a conta que calcula os valores 

    printf ("%2.3f\n", imc ); //impressão dos valores calculados 


   


    return 0;
}