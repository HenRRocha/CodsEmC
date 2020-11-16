#include <stdio.h>
#include <stdlib.h>

int main (){

int y = 0;
int ANO = 0;
scanf("%i", &y); 

 //estrutura para armazenar os dados da data 
    struct data {
    int dia;
    int mes;
    int ano;
}; 
    struct data data ;
    data.ano = y;
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

        data.dia = n - 31;
        data.mes = 0 ; 
        data.mes = 4 ;     
    
    }else{

        data.dia = n;
        data.mes = 0; 
        data.mes = 3;    
   
    }

 //formula para o calculo que verifica se o ano é ou não BISSEXTO
    ANO = y ;

    int numero_dias = 0;    //=> variavel adicional para guardar dias até primeiro de janeiro 
    int numero_mes = 0 ;    //=>     ||       ||     ||    ||    meses até janeiro 

    if (ANO %100 == 0 )  
    {
        ANO = ANO / 100 ;
    }
    if (ANO %4 == 0 )
    {
        printf("Bi\n");   //=> IMPRESSÃO TESTE 
        numero_dias = + 31 + 31 + 29 + data.dia;
        numero_mes = data.mes ;

    }else 
    {
        printf("NÃO BI\n"); //=> IMPRESSÃO TESTE 
        numero_dias = + 31 + 28 + 31 + data.dia;
        numero_mes = data.mes ;

    }   

  //IMPRESSÃO TESTE das formulas 
    printf("DOM %i ", data.dia);
    printf("/MÊS %i ", data.mes);
    printf("/ANO %i \n", data.ano);

 //IMPRESSÃO TESTE das variaveis que guarda quantos dias e meses até primeiro de janeiro 
    printf ("%i DIAS da pascoa até primeiro de janeiro\n", numero_dias );
    printf("%i  MESES até primeiro de janeiro\n", numero_mes);

    while (numero_mes == 0){
        for (int i = 0; i <)
    }

    return 0 ;
}



    



