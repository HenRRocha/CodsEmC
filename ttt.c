#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int  main () {
	int d = 0 , m = 0 , y = 0 , diadasemana;
	printf ( " Digite a data, mês e ano: " );
	scanf ( " %d %d %d ", &d, &m, &y);
	diadasemana = d + m < 3 ? y -  y- 2 , 23 * m / 9 + d + 4 + y / 4 -y / 100 + y / 400: 
    
    diadasemana = diadasemana % 7 ;

	printf ( " O dia da semana é: % d " , diadasemana);
	switch (diadasemana)
     {
		case  0 :
			            printf ( " domingo. \n " );
			break ;
		case  1 :
                        printf ( " Segunda-feira. \n " );
			break ;
		case  2 :
                        printf ( " Terça-feira. \n " );
			break ;
		case  3 :
                        printf ( " quarta-feira. \n " );
			break ;
		case  4 :
                        printf ( " quinta-feira. \n " );
            break ;
		case  5 :
                        printf ( " sexta-feira. \n " );
			break ;
		case  6 :
                        printf ( " sábado. \n " );
	}
	return  0 ;
}