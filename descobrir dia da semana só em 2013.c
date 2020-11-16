#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int dia = 0, x, k ;         // quando a pascoa é em MARÇO  e NÃO BISSEXTO 
  scanf("%d", &dia);
  k = 90 + dia ;
  
  x = k % 7 ;

  if (x == 1)
  {
    printf (" segunda  "  );
  }
  else if (x == 2)
  {
    printf (" terça  " );
  }
   else if (x == 3)
  {
    printf (" quarta  " );
  }
   else if (x == 4)
  {
    printf (" quinta  " );
  }
   else if (x == 5)
  {
    printf (" sexta  " );
  }
   else if (x == 6)
  {
    printf (" sabado  "  );
  }
   else if (x == 7)
  {
    printf (" domingo  "  );
  }
    

  return 0 ;
}