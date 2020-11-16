#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct registro_st {
    char nome [20];
    char cidade [20];
} registro;

void grava_registros(){
    FILE* arquivo = fopen("registros.dat", "wb");
    int qtde = 5;
    fwrite(&qtde, sizeof(qtde), 1,arquivo); //cabeçalho

    registro r;

    strcpy(r.nome, "joao");
    strcpy(r.cidade, "limeira");
    fwrite(&r, sizeof(r), 1, arquivo);
    
    strcpy(r.nome, "j");
    strcpy(r.cidade, "limeira");
    fwrite(&r, sizeof(r), 1, arquivo);

    strcpy(r.nome, "joao");
    strcpy(r.cidade, "limeira");
    fwrite(&r, sizeof(r), 1, arquivo);

    strcpy(r.nome, "joao");
    strcpy(r.cidade, "limeira");
    fwrite(&r, sizeof(r), 1, arquivo);


    fclose(arquivo);  
}

void busca_registro (char * nome){

    FILE* arquivo = fopen("registros.dat", "wb");
    int qtde = 5;
    fwrite(&qtde, sizeof(qtde), 1,arquivo); //cabeçalho
    


}



int main (int argc, char *argv[] ){

    grava_registros ();

    return 0;
}