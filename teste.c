#include <stdio.h>
#include <stdlib.h>

int calculo_anobi(int ano) {
  if (ano % 100 == 0)
    ano /= 100;

  return ano ;
}

int calculo_pascoa (int y){

 //formula para o calculo do domingo de PASCOA
    int g = y % 19; g++;
    int c = y / 100; c++;
    int x = 3 * c / 4 - 12;
    int z = (8 * c + 5) / 25 - 5;
    int e = (11 * g + 20 + z - x) % 30;

    if ((e == 25 && g > 11) || e == 24){
        e++;
    }

    int n = 44 - e;

    if (n < 21){
        n = n + 30;
    }
    
    int d = (5 * y) / 4 - (x + 10);
    n = (n + 7) - ((d + n) % 7);

    if (n > 31){

        y = n - 31;
    
    }else{

        y = n ;
   
    }

	return y ;
}    

int main (){

	int o_mes = 0;
	int o_dia = 0;
	int o_ano = 0;
	int numero_dias = 0;    //=> variavel adicional para guardar dias até primeiro de janeiro 
    int numero_mes = 0 ;    //=>     ||       ||     ||    ||    meses até janeiro 


	int year = 0 ;
	scanf("%i", &year);

	o_ano = year;

	o_dia = calculo_pascoa(year);

	if (calculo_pascoa(year) > 31 ){
		o_mes = 4;
	}else{
		o_mes = 3;
	}

	if (calculo_anobi(year) %4 == 0){
		printf("Bi\n");   //=> IMPRESSÃO TESTE
		numero_dias = + 31 + 31 + 29 + o_dia;
	
	}else 
    {
        printf("NÃO BI\n"); //=> IMPRESSÃO TESTE
		numero_dias = + 31 + 28 + 31 + o_dia;
 
	}

  //IMPRESSÃO TESTE das formulas 
    printf("DOM %i ", o_dia);
    printf("/MÊS %i ", o_mes);
    printf("/ANO %i \n", o_ano);
	printf ("%i DIAS da pascoa até primeiro de janeiro\n", numero_dias );
    printf("%i  MESES até primeiro de janeiro\n", o_mes);


	return 0;
}



