#include <stdio.h>
#include <stdlib.h>

int main (){

    int ano = 0 ;
    int casas_de_impressao = 0; // vou ter que colocar uma tabela de codigo para quando comecar imprimir no começo e no final 
    int semana = 0 ;
    int dia = 0 ;
    int janday=31 , fevday=28, marday=31, abriday=30, maday=31, junday=30, julday=31;
    int agosday=31, setday=30, outday=31, novday=30, dezday=31;
    scanf ("%i", &ano);

    printf ("Calendario do ano %d\n", ano);
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Janeiro                     ||Favereiro                   |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );

    for (int i = 0 ; i < casas_de_impressao; i++){
        printf(" -- ");
            semana ++;
    }

    for( dia = 1; dia < 9; dia++ ){
        printf(" 0%d ", dia );
            semana++;
                if (semana == 7){
                    printf("||");
                        for(int dia = 1; dia < 9; dia++ ){
                            printf(" 0%d ", dia );
                                semana++;
                                    if (semana == 14){
                                        printf("|\n|");
                                            break;                                                    
                                    }
                        }
                }
    }

    for (dia = 9; dia <= 10; dia ++){
        if (dia == 9){
            printf(" 0%d ", dia );
                semana++;
                    }else{
                        printf(" %d ", dia);
                            semana++;
                        }
                                if(semana == 21){
                                    printf("||");
                                        for(dia = 8; dia <= 10; dia ++){
                                            if (dia < 10){
                                                printf(" 0%d ", dia );
                                                    semana++;
                                                        }else{
                                                            printf(" %d ", dia);
                                                                semana++;
                                                            }
                                                                    if(semana == 28){
                                                                        printf("|\n|");
                                    }
                        }
                }
    }




    return 0;
}