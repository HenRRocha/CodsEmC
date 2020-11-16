#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int d = 1 ;
  int m = 1 ;
  int a = y ; 
  int k = 0 ;

  k = d + 2 * m + 3 * (m+1) /5 + a + a/4 - a/100 + a/400 + 2 ; 
  k = k % 7;
  k--;

switch (k)
     {
		case  0 :
			            printf ( " sunda-feira. \n " );
			break ;
		case  1 :
                  printf ( " terça-feira. \n " );
			break ;
		case  2 :
                  printf ( " quarta-feira. \n " );
			break ;
		case  3 :
                  printf ( " quinta-feira. \n " );
			break ;
		case  4 :
                  printf ( " sexta-feira. \n " );
            break ;
		case  5 :
                  printf ( " sabado. \n " );
			break ;
		case  6 :
                  printf ( " domingo. \n " );
	}


  


return 0 ;
}