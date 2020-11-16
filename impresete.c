#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetor_jan [31];
    int vetor_fev [28];
    int v = 0; int h = 0;
    int iniciojan = 2 ; //controla o inicio da impressão de janeiro 
    int iniciofev = 0;
    int semana = 0;
    int aux = 0;
    int xua = 0;

    for (int i = 0; i <= 31; i++ ){
        vetor_jan[i] = v ;
        v++; 
    }

    for (int i = 0; i <= 28; i++ ){
        vetor_fev[i] = h ;
        h++; 
    }

     if (iniciojan == 0){  
        iniciofev = 3;
    }
    if (iniciojan == 1){
        iniciofev = 4 ;
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
    }


    printf ("Calendario do ano 2015\n");
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Janeiro                     ||Favereiro                   |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );

    for (int i = 0; i < iniciojan; i++){       //imprime os traços 
        printf(" -- ");
        semana++;
    }

    int auxmes1 = 1;
    int auxmes2 = 1;

    for (int i = 0; i < 6; i++){

    for (int i = 1; i <= 31; i++ ){
        if (auxmes1 < 10 ){
            printf(" 0%d ", auxmes1);
            semana++;
            auxmes1++;
        }else{
            if(auxmes1 <= 31){
            printf(" %d ", auxmes1);
            semana++;
            auxmes1++;
            }
        }
        if (semana == 7){
            printf("||");
            break;
        }
        if (auxmes1 > 31){
            printf(" -- ");
            semana++;
        }
    }
    
    if (auxmes2 <= 1 ){
    for (int i = 0; i < iniciofev; i++){       //imprime os traços 
        printf(" -- ");
        semana++;
    }
    }


    for (int i = 1; i <= 28; i++ ){

        if (auxmes2 < 10 ){
            printf(" 0%d ", auxmes2);
            semana++;
            auxmes2++;
        }else{
            if (auxmes2 <=28){
            printf(" %d ", auxmes2);
            semana++;
            auxmes2++;
            }
            
        }
        if (semana == 14){
            printf("|\n|");
            break;
        }
        if (auxmes2 > 28){
            printf(" -- ");
            semana++;
        }
    }

    semana = 0;
    }
    printf ("----------------------------||----------------------------|\n");

    return 0;
}