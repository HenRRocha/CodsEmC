#include <stdio.h>
#include <stdlib.h>

int main (){

    int ano = 0 ;
    int casas_de_impressao = 0 ; // vou ter que colocar uma tabela de codigo para quando comecar imprimir no começo e no final 
    int final = 0;
    int semanajan = 0 ;
    int semanafev = 0 ;
    int diaum = 0 ;
    int diad = 0;
    int janday=31 , fevday=28, marday=31, abriday=30, maday=31, junday=30, julday=31;
    int agosday=31, setday=30, outday=31, novday=30, dezday=31;
    scanf ("%i", &ano);

    if (casas_de_impressao == 0){  //controla a impressão de traços no começo de fev
        final = 3;
    }
    if (casas_de_impressao == 1){
        final = 4 ;
    }
    if (casas_de_impressao == 2){
        final = 5;
    }
    if (casas_de_impressao == 3){
        final = 6;
    }
    if (casas_de_impressao == 4){
        final = 0;
    }
    if (casas_de_impressao == 5){
        final = 1;
    }
    if (casas_de_impressao == 6){
        final = 2;
    }

    printf ("Calendario do ano %d\n", ano);
    printf ("|----------------------------||----------------------------|\n");
    printf ("|Janeiro                     ||Favereiro                   |\n");
    printf ("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf ("|" );

    for (int i = 0 ; i < casas_de_impressao; i++){  // traços do começo de jan
        printf(" -- ");
        semanajan++;
    }

    for(diaum = 1; diaum <= 7; diaum++){  //impressão de jan
            printf(" 0%d ", diaum);
            semanajan++;
            if (semanajan == 7){
                printf("||");
                break;
            }
    }

    for (int i = 0 ; i < final; i++){  // traços começo de fev
        printf(" -- ");
        semanafev++;
    }

    for(diad = 1; diad <= 7; diad++){  // impressão de fev
        printf(" 0%d ", diad);
        semanafev++;
        if (semanafev == 7){
            printf("|\n|");
            break;
        }
    }

    

    for ( int diajan = diaum + 1; diajan < 10; diajan++ ){ //continuação de jan
        printf(" 0%d ", diajan);
        semanajan++;
        if(semanajan == 14){
            printf("||");
            break;
        }
    }


    if (semanajan != 14){
    for(diaum = 10; diaum <= 10; diaum++){
        printf(" %d ", diaum);
        semanajan++;
        if(semanajan== 14){
            printf("||");
            break;
        }
    }
    }else{
        for (int diafev = diad +1; diafev < 10; diafev++){ //só vou ter que passa do 10 nos dois meses 
            printf(" 0%d ", diafev);
            semanafev++;
        }
    }

    
    if (semanajan == 13){
    for(int d = diaum + 1; diaum < 12; diaum++ ){
        printf(" %d ", diaum);
        semanajan++;
        if (semanajan == 14){
            printf("||");
            }
        }
    }

    for (int d = diad +1; d < 10; d++ ){ // NAO DEU CERTO POREM AGORA SEI PEGAR O NUMERO SEM INICIA LO NO FOR !!!!!
        printf(" 0%d ", d);              // FORÇA VOCÊ VAI CONSEGUIR GUERREIRO !   
        semanafev++;
        if(semanafev == 14){
            printf("|\n|");
            break;
        }
    }







    


    



    



   
    

    

    
    return 0;
}