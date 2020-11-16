#include <stdio.h>
#include <stdlib.h>
int main (){

    int ano = 0 ;
    int casas_de_impressao = 4; 
    int final = 0;
    int end = 7;
    int semana = 0 ;
    int dia = 0 ;
    int janday=31 , fevday=28, marday=31, abriday=30, maday=31, junday=30, julday=31;
    int agosday=31, setday=30, outday=31, novday=30, dezday=31;
    scanf ("%i", &ano);

    if (casas_de_impressao == 0){
        final = 4;
    }
    if (casas_de_impressao == 1){
        final = 3;
    }
    if (casas_de_impressao == 2){
        final = 2;
    }
    if (casas_de_impressao == 3){
        final = 1;
    }
    if (casas_de_impressao == 4){
        final = 7;
    }
    if (casas_de_impressao == 5){
        final = 6;
    }
    if (casas_de_impressao == 6){
        final = 5;
    }

    printf ("Calendario do ano %d\n", ano);
    printf ("|----------------------------|\n");
    printf ("|Janeiro                     |\n");
    printf ("|dom seg ter qua qui sex sab |\n");
    printf ("|" );

    for (int i = 0 ; i < casas_de_impressao; i++){
        printf(" -- ");
            semana ++;
    }

    for (dia = 1 ; dia < 10; dia++){
        printf(" 0%d ", dia );
            semana++;
                if(semana == 7){
                    printf("|\n|");
                }
                if (semana == 14){
                            printf("|\n|");
                        }
    }

    for (dia = 10; dia <= janday; dia++){
        printf(" %d ", dia );
            semana++;
                if(semana == 14){
                    printf("|\n|");
                }
                    if (semana == 21){
                        printf("|\n|");
                    }
                        if(semana == 28){
                           printf("|\n|");
                        }
                            if(semana == 35){
                                printf("|\n|");
                            } 
                            if ( dia == 31 ){
                                for (int i = 0 ; i < final; i++){ 
                                    printf(" -- ");
                                        semana++;
                                }
                            }
    }
    printf ("|\n" );

    if (semana == 35){
        printf ("|" );
        for (int i = 0; i < 7 ; i++){
            printf(" -- ");
        }
        printf ("|\n" ); 
    }

    printf ("|----------------------------|\n");

    return 0;
}