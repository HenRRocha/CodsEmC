#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz_jan [5][7];
    int matriz_fev [4][7];
    int aux = 1;

    for (int l = 0; l < 5; l++){
        for(int c = 0; c < 7; c++){
            matriz_jan[l][c] = aux;
            aux++;
        }
    }

    for (int l = 0; l < 5; l++){
        for(int c = 0; c < 7; c++){
            printf(" %d ", matriz_jan[l][c]);
        }
    }





    return 0 ;
}