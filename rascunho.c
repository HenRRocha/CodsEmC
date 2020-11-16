  for (int i = 0 ; i < casas_de_impressao; i++){
        printf(" -- ");
        semana ++;
    }

    for( dia = 1; dia <= janday; dia++ ){
        if(dia < 10){
        printf(" 0%d ", dia );
            semana++;
        }else{
            printf(" %d ", dia );
            semana++;
        }
                if (semana == 7){
                    printf("||");
                        for(int dia = 1; dia <= fevday; dia++ ){
                            if (dia < 10){
                            printf(" 0%d ", dia );
                                semana++;
                            }else{
                                printf(" %d ", dia );
                                semana++;
                            }
                                    if (semana == 14){
                                        printf("|\n|");
                                    }
                                            if(semana == 21){
                                                printf("||");
                                            }
                                                    if (semana == 28){
                                                       printf("|\n|"); 
                                                    }
                        }
                }
            if (semana == 35){
                printf("||"); 
            }
            if (semana == 42){
                printf("|\n|"); 
            }
            if (semana == 49){
                printf("||"); 
            }
            if (semana == 56){
                printf("|\n|"); 
            }

    }