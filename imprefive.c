#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetor_jan [31];
    int vetor_fev [28];
    int v = 0; int h = 0;
    int iniciojan = 0 ; //controla o inicio da impressão de janeiro 
    int iniciofev = 0;
    int semanajan = 0 ;
    int semanafev = 0 ;
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

    for (int i = 0; i < iniciojan; i++){   // impressão de traços de janeiro 
        printf(" -- ");
        semanajan++;
    }

    for (int i = 1; i < 10; i++){           //impressão da primeira semana de janeiro 
        printf(" 0%d ", vetor_jan[i]);
        semanajan++;
        if (semanajan == 7){
            printf("||");
            aux = i + 1;    
            break;
        }
    }

    for (int i = 0; i < iniciofev; i++){            //impressão dos traços de favereiro 
        printf(" -- ");
        semanafev++;
    }

    for (int i = 1; i < 10; i++){                   //começo da primeira semana de fev
        printf(" 0%d ", vetor_fev[i]);
        semanafev++;
        if (semanafev == 7){
            printf("|\n|");
            xua = i + 1;
            break;
        }
    }

    for (int i = aux; i < 10; i++){             // começo da segunda semana de janeiro 
        printf(" 0%d ", vetor_jan[i]);
        semanajan++;
        if (semanajan == 14){
            printf("||");
            xua = i + 1 ;
            break;
        }
    }

    aux = 0;

    for (int i = 10; i <= 14; i++ ){    // impressão até 10 para tirar o zero de jan  
        printf(" %d ", vetor_jan[i] );
        semanajan++;
        if (semanajan == 14){
            aux = i - 2;
            printf("||");
            break;
        }
    }
    
    xua = 0 ;

    for (int h = aux; h < 10 ; h++){   //impressão até 10para tirar o zero de fev 
        printf(" 0%d ", vetor_jan[h]);
        semanajan++;
        if(semanajan == 21 ){
            printf("|\n|");
        }
    }

    for (int i = 10; i < 15; i++){     // impressão para terminar a segunda semana  
        printf(" %d ", vetor_jan[i]);
        semanajan++;
        if (semanajan == 21 ){
            xua = i - 3;              //seguindo a lógica de subtrair 3 do ultimo dia da segunda semana para chegar no primeiro da terceira semana de janeiro 
            printf("|\n|");
        }
    }

    aux = 0;

    for(int i = xua; i < 20; i++ ){
        printf(" %d ", vetor_jan[i]);
        semanajan++;
        if (semanajan == 28){
            aux = i - 2;
            printf("||");
            break;
        }
    }

    for (int i = aux; i < 25; i ++ ){
        printf(" %d ", vetor_jan[i]);
        semanajan++;
        if (semanajan == 35){
            printf("|\n|");
            break;
        }
    }





    



       

    return 0;
}