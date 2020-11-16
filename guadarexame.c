#include <stdio.h>
#include <stdlib.h>

int calculo_anobi(int ano) {  // => formula para calcular se o ano é bissexto 
//formula dada pelo professor 
  if (ano % 100 == 0)
    ano /= 100;

  return ano ;
}

int calculo_pascoa (int y){  // => formula para o calculo do domingo de PASCOA 
 //formula dada pelo professor 
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

int first_jan  (int y){      // => função para achar dia da semana de primeiro de janeiro 
    
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

int uni = 0; 
int mes_atual = 0;

int print_meses ( int comeco, int mes1, int mes2 ){

    int iniciojan = comeco ; //controla o inicio da impressão de janeiro 
    int iniciofev = 0;
    int semana = 0;
    int auxmes1 = 1;
    int auxmes2 = 1;
    int odia1 = mes1;
    int odia2 = mes2;
    int contador_do_final = 0;
    int cintador2 = 0;
    mes_atual++;
    // condições para achar o primeiro dia da semana de feveiro com o primeiro dia de janeiro 
    if (mes1 + mes2 == 60 || mes1 + mes2 == 59){

    if (iniciojan == 0){ 
        iniciofev = 3;
    }
    if (iniciojan == 1){
        iniciofev = 4;
    }
    if (iniciojan == 2){
        iniciofev = 5;
    }
    if (iniciojan == 3){
        iniciofev = 6;
    }
    if (iniciojan == 4){
        iniciofev = 0;
    }
    if (iniciojan == 5){
        iniciofev = 1;
    }
    if (iniciojan == 6){
        iniciofev = 2;
    }//aqui ta pronto 
    }
    //IFs para soma de meses iguais == 61 
    //if (mes_atual == 2 || mes_atual  == 3 || mes_atual == 4){
    if (iniciojan == 14){ 
        iniciojan = 0;
    }
    if (iniciojan == 13){
        iniciojan = 1;
    }
    if (iniciojan == 12 ){
       iniciojan = 2;
    }
    if (iniciojan == 11){
        iniciojan = 3;
    }
    if (iniciojan == 10){
        iniciojan = 4;
    }
    if (iniciojan == 9 ){
        iniciojan = 5;
    }
    if (iniciojan == 8) {
        iniciojan = 6;
    }
    if (iniciojan == 7 || iniciojan == 16){
        iniciojan = 0;
    }// OBS
    if (iniciojan == 7){ 
        iniciofev = 0 ;
    }
    if (iniciojan == 6){
       iniciofev = 2;
    }
    if (iniciojan == 5 ){
       iniciofev = 1;
    }
    if (iniciojan == 4){
        iniciofev = 0;
    }
    if (iniciojan == 3){
        iniciofev = 6;
    }
    if (iniciojan == 2){
        iniciofev = 5;
    }
    if (iniciojan == 1) {
        iniciofev = 4;
    }
    if (iniciojan == 0 ){
        iniciofev = 3;
    }
    if(mes_atual == 5 || mes_atual == 6){
        iniciofev--;
    }//imprime os traços de jan 
    for (int i = 0; i < iniciojan; i++){       
        printf(" -- ");
        semana++;
    }//laço que faço loop para imprimir os meses
    for (int i = 0; i < 6; i++){              
    // laço para imprmir janeiro
    for (int i = 1; i <= odia1; i++ ){    
        if (auxmes1 <= odia1)
            {
                printf(" %.2d ", auxmes1);
                semana++;
                auxmes1++;
            }       
        if (semana == 7){
            printf("||");
            break;
        }
        if (auxmes1 > odia1){
            printf(" -- ");
            semana++;
        }
    }//imprime os traços jan 
    if (auxmes2 <= 1 ){
    for (int i = 0; i < iniciofev; i++){       
        printf(" -- ");
        semana++;
    }
    } // laço para imprimir favereiro
    for (int i = 1; i <= odia2; i++ ){  
         if (auxmes2 <= odia2)
            {
                printf(" %.2d ", auxmes2);
                semana++;
                auxmes2++;
            }
        if (semana == 14){
            printf("|\n|");
            break;
        }
        if (auxmes2 > odia2 ){
            printf(" -- ");
            contador_do_final++;   //=>variavel para contar quantas casas acaba o mes 
            semana++;
        }
    }//
    semana = 0;
    }// guardando em uma variavel universal para usar fora do função
    uni = contador_do_final ;   

    return uni ;  // retorno com o numero de casas 
}

int printAno (int D, int ANO){

    int janday=31, fevday=28, marday=31, abriday=30, maday=31, junday=30;
    int agosday=31, setday=30, outday=31, novday=30, dezday=31, julday=31;
    int R = D;  // entrada temporaria da função 
    int U = 0;  // variavel que vai guardar o numeoro de casas para usar no proximo mes 

    if (calculo_anobi(ANO) %4 == 0){                  
        fevday++;                         
	}

    printf ("|----------------------------||----------------------------|\n");
    printf ("|Janeiro                     ||Favereiro                   |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );
    print_meses(R, janday, fevday );
    printf ("----------------------------||----------------------------|\n");

    U = uni;
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Março                       ||Abril                       |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );
    print_meses(U, marday, abriday );
    printf ("----------------------------||----------------------------|\n");

    U = uni;
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Maio                        ||Junho                       |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );    
    print_meses(U, marday, junday);
    printf ("----------------------------||----------------------------|\n");

    U = uni  ;
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Julho                       ||Agosto                      |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );    
    print_meses(U, julday, agosday ); 
    printf ("----------------------------||----------------------------|\n");

    U = uni +7 ;
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Setembro                    ||Outubro                     |\n");  
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );    
    print_meses(U, setday, outday );
    printf ("----------------------------||----------------------------|\n");

    U = uni   ;
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Novembro                    ||Dezembro                    |\n"); 
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );    
    print_meses(U, novday, dezday );
    printf ("----------------------------||----------------------------|\n");

    return 0;
}

int main (){

	int o_mes = 0;         // => variavel para guardar o mes da pascoa  
	int o_dia = 0;         // => variavel para guardar o dia da pascoa
	int o_ano = 0;         // => guardar o ano em quetão (REMOVER) 
	int numero_dias = 0;   // => variavel adicional para guardar dias até primeiro de janeiro 
    int numero_mes = 0 ;   // => variavel para guaradar quantos meses até janeiro
	int year = 0 ;       // => variavel para guardar o ano 
	scanf("%i", &year);  // => entrada do ano a ser impresso 
	o_ano = year;        // => mudança do dado do ano para outra variavel para me organizar (REMOVER)

	o_dia = calculo_pascoa(year); // => chamada da função para o calculo do dia dia da pascoa 

	if (calculo_pascoa(year) > 31 ){  // => chamada da função para verificar o mês da pascoa 
		o_mes = 4;
	}else{
		o_mes = 3;
	}//chamada da função para o calculo se o ano é bissexto ou não
	if (calculo_anobi(year) %4 == 0){                  
		printf("Bi\n");                         // => IMPRESSÃO TESTE (REMOVER)
		numero_dias = + 31 + 31 + 29 + o_dia;   // => guardando numero de dias da pascoa até primeiro de janeiro do ano bissexto

	}else 
    {
        printf("NÃO BI\n");                     // => IMPRESSÃO TESTE (REMOVER)
		numero_dias = + 31 + 28 + 31 + o_dia;   // => guardando numero de dias da pascoa até primeiro de janeiro do ano não bissexto   
 
	}

    //printf("%i\n",  first_jan(year));               // => IMPRESSÃO TESTE (REMOVER)
    int casas_impressao = first_jan(year) + 1;     // => variavel que controla quantas casas vazias no começo do mês 

  //IMPRESSÕES DE TESTE (REMOVER) 
    printf("DOM %i ", o_dia);
    printf("/MÊS %i ", o_mes);
    printf("/ANO %i \n", o_ano);
	printf ("%i DIAS da pascoa até primeiro de janeiro\n", numero_dias );
    printf("%i  MESES até primeiro de janeiro\n", o_mes);
    printf("imprimir %i casas vazias \n\n", casas_impressao);
    printf("Calendario do ano %d\n", o_ano);

    printAno(casas_impressao, o_ano);


    
	return 0;
}



