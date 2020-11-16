#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main ()
{
    int ano = 2015, dia = 1 ;
    char nome [12] = "Janeiro"; ;
    char tira [50];
    int a, b, c, i ;
    int  fat = 3 ; 
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
                                      

   for (a = 0; a <= fat; a++)                         //imprimi a tira 3 vezes 

      printf (" %c%c ", tira[0], tira[1] );           //impressão da tira 
      printf (" 0%d", dia  );                       //primeira impressão do dia    
      dia++ ;
      printf ("  0%d", dia );
      dia++ ;
      printf ("  0%d  |\n", dia );
      dia++ ;
      printf ("| 0%d", dia );
      dia++;

   for (a = 0; a < 5; a++)  
   {
      printf ("  0%d", dia );
      dia++;
   }
   printf ("  %d  |\n", dia ); //FINAL DA COLUNA
   dia++;
   printf ("| %d", dia );      //COMEÇO DA COLUNA
   dia++;

   for (a = 0; a < 5; a++)  
   {
      printf ("  %d", dia );
      dia++;
   }
   printf ("  %d  |\n", dia ); //FINAL DA COLUNA
   dia++;
   printf ("| %d", dia );     //COMEÇO DA COLUNA
   dia++;
   for (a = 0; a < 5; a++)  
   {
      printf ("  %d", dia );
      dia++;
   }
   printf ("  %d  |\n", dia ); //FINAL DA COLUNA
   dia++;
   printf ("| %d", dia );     //COMEÇO DA COLUNA
   dia++;
   for (a = 0; a < 5; a++)  
   {
      printf ("  %d", dia );
      dia++;
   }
   printf ("  %d  |\n", dia );
   printf ("|" );
   for (a = 0; a < fat1; a++)
   {
   printf (" %c%c ", tira[0], tira[1] );
   }
   printf (" |\n" );
   printf ("|  --  --  --  --  --  --  -- |\n");
   printf ("|-----------------------------|\n");
   dia = 1;

   }

   

 
     
    


    return 0 ;
}