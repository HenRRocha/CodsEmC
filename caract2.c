#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *origem;
    FILE *destino;

    origem = fopen("origem.txt", "r");
    destino = fopen("destino.txt", "w");

    char c;
    while(!feof(origem)){
        c = fgetc(origem);
        fputc(c, destino);
    }
    fclose(origem);
    fclose(destino);

}
