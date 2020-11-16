#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM  5 ;

int* processa (int* A, int*B){
    int resultado[TAM]; 

        for (int i = 0; i <TAM ; i++){
            resultado[i]= A[i] * B[i];
        }

        for (int i = 0; i < TAM ; i++){
            printf ("%d", resultado[i]);
        }

    return 0;
}

