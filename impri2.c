#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int ano = 2015, dia = 1 ;
    char nome [12] = "Janeiro"; ;
    char tira [50];
    int a, b, c, i ;
    int  fat = 0 ; 
    int fat1 = 7 ;
    int fat2 = 1 ;
    tira [0] = '-' ;
    tira [1] = '-' ;


   printf ("Calendario do ano %d\n", ano);
   

   for (b = 0; b < fat2; b++)
   {
     printf ("|-----------------------------|\n"); 
     printf ("|%c                      |\n", nome[0]);
     printf ("|dom seg ter qua qui sex sab  |\n");
     printf ("|" );
   }
     // if (r ==)  0 TIRAS/NÃO BISSEXTO                // IF limita quantas vezes a tira vai ser impressa 

   for (a = 0; a <= fat; a++)                       
   {
      printf (" 0%d", dia  );                       //primeira impressão dia/com 0    
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d  |\n", dia );
      dia++ ;
  
   }
   for (a = 0; a <= fat; a++)                   //segunda impressão com e sem 0
   {
      printf ("| 0%d", dia );
      dia++;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d  |\n", dia );
      dia++ ;
   }
   for (c = 0 ; c <= 1; c++)                   //laço para duas ultimas colunas sem 0
   {
   for (a = 0; a <= fat; a++)  
   {
      printf ("| %d", dia );
      dia++;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d  |\n", dia );
      dia++ ;
   } 
   }
    printf ("| --  --  --  --  --  --  --  |\n");
    printf ("|-----------------------------|\n");        // final do mes FEV NÃO BISSEXTO 

    for (a = 0; a <= fat; a++)                          
   {
      printf (" 0%d", dia  );                       //primeira impressão dia/com 0    
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d  |\n", dia );
      dia++ ;
  
   }
   for (a = 0; a <= fat; a++)                 
   {
      printf ("| 0%d", dia );
      dia++;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d  |\n", dia );
      dia++ ;
   }
   for (c = 0 ; c <= 1; c++)                  
   {
   for (a = 0; a <= fat; a++)  
   {
      printf ("| %d", dia );
      dia++;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d", dia );
      dia++ ;
      printf ("  %d  |\n", dia );
      dia++ ;
   } 
   }
    printf ("| --  --  --  --  --  --  --  |\n");
    printf ("|-----------------------------|\n");         
     
     
    


    return 0 ;
}