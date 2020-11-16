#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int y = 0, G = 0, c = 0, x = 0, z = 0, E = 0, N = 0, D = 0, ANO = 0 ; 
    int janday=31 , fevday=28, marday=31, abriday=30, maday=31, junday=30, julday=31;
    int agosday=31, setday=30, outday=31, novday=30, dezday=31;
     
    int dia_pascoa, mes_pascoa;
    int semana = 0 ;
    int day;
     int diass;

    scanf ("%i", &y );
    G = y%19 ;
    G ++ ;
    c = y/100 ;
    c ++ ;
    x = 3 * c / 4 - 12 ;
    z = (8 * c + 5) / 25 - 5 ;          
    E = (11 * G + 20 + z - x) %30 ;
    if ( E == 25 || G > 11 && E == 24 )
    {
        E ++ ; 
    }
    N = 44 - E ;                          
    if ( N < 21 )
    {
        N = N + 30 ;
    }
    D = (5 * y) /4 - (x + 10) ;         
    N = (N + 7) - ((D + N)%7) ;
    if (N > 31 )
    {
        N = N - 31 ;                               //OK
        printf ("Domingo %i de abril \n ", N );    //TIRAR

    }else 
    {
        printf ("Domingo %i de março \n ", N );    //TIRAR
    }

    int es = 0;
    int se = 0;

    ANO = y ;
    if (ANO %100 == 0 )
    {
        ANO = ANO / 100 ;
    }
    if (ANO %4 == 0 )
    {
         int d = 1 ;
         int m = 1 ;
         int a = y ; 
         int k = 0 ;

         k = d + 2 * m + 3 * (m+1) /5 + a + a/4 - a/100 + a/400 + 2 ; 
         k = k % 7;
         k--;
         fevday++;

switch (k)
     {
		case  0 :printf ( " sunda-feira. \n " ); es = 1, se = 1 ;		  // BISSEXTO          
			break ;
		case  1 :printf ( " terça-feira. \n " );  es = 2, se = 3 ;	                
			break ;
		case  2 :printf ( " quarta-feira. \n " );  es = 3, se = 2 ;  // ta certo teste 2020	                
			break ;
		case  3 :printf ( " quinta-feira. \n " );  es = 4, se = 4 ;	              
			break ;
		case  4 :printf ( " sexta-feira. \n " );  es = 5, se = 7 ;	               
            break ;
		case  5 : printf ( " sabado. \n " );  es = 6, se = 6 ;	  
			break ;
		case  6 :printf ( " domingo. \n " );  es = 0, se = 5 ;	               
	}
    }
    else 
    {             
         int d = 1 ;
         int m = 1 ;
         int a = y ; 
         int k = 0 ;
         k = d + 2 * m + 3 * (m+1) /5 + a + a/4 - a/100 + a/400 + 2 ; 
         k = k % 7;

switch (k)
     {
		case  0 :printf ( " sunda-feira. \n " ); es = 1, se = 2 ;				      
			break ;
		case  1 :printf ( " terça-feira. \n " ); es = 2, se = 2 ;	                 
			break ;
		case  2 : printf ( " quarta-feira. \n " ); es = 3, se = 2 ;	                
			break ;
		case  3 :printf ( " quinta-feira. \n " ); es = 4, se = 0 ;	                 
			break ;
		case  4 : printf ( " sexta-feira. \n " ); es = 5, se = 5 ;	                 
            break ;
		case  5 :printf ( " sabado. \n " ); es = 6, se = 5 ;	                
			break ;
		case  6 : printf ( " domingo. \n " ); es = 0, se = 4 ;	           
	}
    }

        //int semana = 0 ;
        //int day;
        //int diass;


        printf ("Calendario do ano %d\n", ANO);

        printf ("| ----------------------------|\n"); 

    
        //for (int e = 0; e <= 1 ; e++)
            
         printf ("| Janeiro                     |\n"); // MUDAR MES
         printf ("| dom seg ter qua qui sex sab |\n");
         printf ("| " );
         diass = janday;    
        for ( day = 0; day < es ; day++)
        {
            printf(" -- ");
            semana++; 
        }
        for (int day = 1 ; day < 9; day++)
        {
            printf(" 0%d ", day );
            semana++;

            if (semana == 7)
            {
                printf("|\n| ");
                semana =0;
            }
        }
        for (int day = 10; day <= diass; day++)
        {
            printf(" %d ", day);
            semana ++;
            if (semana==7)
            {
                printf("|\n| ");
                semana = 0;
            }
        }
         for ( day = 0; day < se ; day++)
        {
            printf(" -- ");
            semana++; 
            if (semana == 7)
            {
                printf("|\n");
                semana = 0 ;
            }
        
        }
        printf ("|-----------------------------|\n");
        es ++;
        se ++;

        





    return 0 ; 
}