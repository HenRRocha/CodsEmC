#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void armazena (){
    FILE *arquivo;
    FILE *destino;
    
    arquivo = fopen("arquivo.txt", "rb");
    destino = fopen("destino.txt", "rb");

    const char s[2] = ",";
    char *token;

    token = strtok(arquivo, s);

    while (token != NULL){
        fwrite(arquivo, sizeof(char), 100, destino  );
    }
    fclose(destino);
    fclose(arquivo);
    

}

int main (){

    armazena ();

}