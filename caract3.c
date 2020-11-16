#include <stdio.h>

int main (){//escreve tabela recordes
    char nome[4];
    int recorde;

    arquivo = fopen("arquivo.txt", "r");

    strcpy(recorde, "ABC");
    recorde = 50000;
    fprint(arquivo,"%s %d", nome , recorde);

    strcpy(recorde, "RDN");
    recorde = 999999;
    fprint(arquivo,"%s %d", nome , recorde);

    strcpy(recorde, "ASD");
    recorde = 101010;
    fprint(arquivo,"%s %d", nome , recorde);

    fclose(arquivo);

}