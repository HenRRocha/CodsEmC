#include <stdio.h>
#include <stdlib.h>

int main (){

    int ano = 0 ;
    int casas_de_impressao = 4; // vou ter que colocar uma tabela de codigo para quando comecar imprimir no começo e no final 
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

    for( dia = 1; dia < 10; dia++ ){
        printf(" 0%d ", dia );
            semana++;
                if (semana == 7){
                    printf("||");
                        for(int dia = 1; dia < 10; dia++ ){
                            printf(" 0%d ", dia );
                                semana++;
                                    if (semana == 14){
                                        printf("|\n|");
                                            break;                                                    
                                    }
                        }
                }
    }

    for (dia = 10; dia < janday; dia++){
        printf(" %d ", dia);
            semana++; 
                if (semana == 21){
                    printf("||");
                        for(dia = 8; dia < 10; dia++ ){
                            printf(" 0%d ", dia);
                                semana++;
                                    dia++;
                                    printf(" 0%d ", dia);
                                        semana++;
                                            for (dia = 10; dia < fevday; dia++){
                                                printf(" %d ", dia);
                                                    semana++;
                                                        if (semana == 28 ){
                                                            printf("|\n|");
                                                                for(dia = 11; dia < janday; dia++){
                                                                    printf(" %d ", dia);
                                                                        semana++;
                                                                            if (semana == 35){
                                                                                printf("||");
                                                                                    for(dia = 15; dia < fevday; dia++){
                                                                                        printf(" %d ", dia);
                                                                                            semana++;
                                                                                                if(semana == 42){
                                                                                                    printf("|\n|");
                                                                                                        for(dia = 18; dia < janday; dia++){
                                                                                                            printf(" %d ", dia);
                                                                                                                semana++;
                                                                                                                    if(semana == 49){
                                                                                                                        printf("||");
                                                                                                                            for(dia = 22; dia <= fevday; dia++){
                                                                                                                                printf(" %d ", dia);
                                                                                                                                    semana++;
                                                                                                                                        if (semana == 56){
                                                                                                                                            printf("|\n|");
                                                                                                                                                for(dia = 25; dia <= janday; dia++){
                                                                                                                                                    printf(" %d ", dia);
                                                                                                                                                        semana++;
                                                                                                                                                            if(semana == 63){
                                                                                                                                                                printf("||");
                                                                                                                                                                    for(dia = 0; dia <= 7; dia++){
                                                                                                                                                                        printf(" -- ");
                                                                                                                                                                            semana++;
                                                                                                                                                                                if(semana == 70){
                                                                                                                                                                                    printf("|\n|");
                                                                                                                                                                                        for( dia = 0; dia < 7; dia++){
                                                                                                                                                                                            printf(" -- ");
                                                                                                                                                                                                semana++;
                                                                                                                                                                                                    if (semana == 77){
                                                                                                                                                                                                        printf("||");
                                                                                                                                                                                                            for(dia = 0; dia < 7; dia++){
                                                                                                                                                                                                                printf(" -- ");
                                                                                                                                                                                                                    semana++;
                                                                                                                                                                                                                        if (semana == 84){
                                                                                                                                                                                                                            printf("|");
                                                                                                                                                                                                                                break;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                            }
                                                                                                                                                                                                    }
                                                                                                                                                                                        }
                                                                                                                                                                                }
                                                                                                                                                                    }    
                                                                                                                                                            }
                                                                                                                                                }
                                                                                                                                        }
                                                                                                                            }    
                                                                                                                    }
                                                                                                        }
                                                                                                }
                                                                                    }
                                                                            }
                                                                }
                                                        }   
                                            }

                         
                        }
                }
    }  
   
    return 0;
}