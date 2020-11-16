#include <stdio.h>
#include <stdlib.h>

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
    if (iniciojan == 9){
        iniciojan = 5;
    }
    if (iniciojan == 8) {
        iniciojan = 6;
    }
    if (iniciojan == 7){
        iniciojan = 0;
    }
   // }//CONTINUAÇÃO da soma dos meses == 61
    //if (mes_atual == 2 || mes_atual  == 3 || mes_atual == 4){
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
    if (iniciojan == 0){
        iniciofev = 3;
    }
    //}//ULTIMOS

    if(mes_atual == 5 || mes_atual == 6){
        iniciofev--;
    }

    


    for (int i = 0; i < iniciojan; i++){       //imprime os traços de jan 
        printf(" -- ");
        semana++;
    }

    for (int i = 0; i < 6; i++){              //laço que faço loop para imprimir os meses

    for (int i = 1; i <= odia1; i++ ){   // laço para imprmir janeiro 
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
    }
    
    if (auxmes2 <= 1 ){
    for (int i = 0; i < iniciofev; i++){       //imprime os traços jan 
        printf(" -- ");
        semana++;
    }
    }

    for (int i = 1; i <= odia2; i++ ){  // laço para imprimir favereiro 
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
            contador_do_final++;   //variavel para contar quantas casas acaba o mes 
            semana++;
            
        }
    }
    
    semana = 0;
    }
    
    uni = contador_do_final ;  // guardando em uma variavel universal para usar fora do função 

    return uni ;  // retorno com o numero de casas 
}

int main (){

    int janday=31, fevday=28, marday=31, abriday=30, maday=31, junday=30;
    int agosday=31, setday=30, outday=31, novday=30, dezday=31, julday=31;
    int R = 4;  // entrada temporaria da função 
    int U = 0;  // variavel que vai guardar o numeoro de casas para usar no proximo mes 


    printf ("Calendario do ano 0000\n");
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
    U = uni + 7 ;

    printf ("|----------------------------||----------------------------|\n");
    printf ("|Setembro                    ||Outubro                     |\n");  
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );    
    print_meses(U, setday, outday );
    printf ("----------------------------||----------------------------|\n");
    U = uni + 7 ;

    printf ("|----------------------------||----------------------------|\n");
    printf ("|Novembro                    ||Dezembro                    |\n"); 
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );    

    print_meses(U, novday, dezday );
    printf ("----------------------------||----------------------------|\n");

    



    return 0;
}

