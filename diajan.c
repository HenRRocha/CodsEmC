#include <stdio.h>
#include <stdlib.h>

int first_jan  (int y){   
    
    int es = 0;
    int se = 0;
    int k = 0 ;
    int ANO = y ;

    if (ANO %100 == 0 )
    {
        ANO = ANO / 100 ;
    }
    if (ANO %4 == 0 )
    {
         int d = 1 ;
         int m = 1 ;
         int a = y ; 
         k = d + 2 * m + 3 * (m+1) /5 + a + a/4 - a/100 + a/400 + 2 ; 
         k = k % 7;
         k--;
	
 		switch (k)
     	{
		case  0 : return k;		  // BISSEXTO          
			break;
		case  1 :return k;	                
			break;
		case  2 :return k;                 
			break;
		case  3 :return k;	              
			break;
		case  4 :return k;	               
            break;
		case  5 : return k;	  
			break;
		case  6 :return k;	
            break;               
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
		case  0 :return k;			      
			break;
		case  1 :return k;	                 
			break;
		case  2 : return k;	                
			break;
		case  3 :return k;	                 
			break;
		case  4 :return k;	                 
            break;
		case  5 :return k;	                
			break;
		case  6 : return k;
            break;	           
		}
	}
	
}


