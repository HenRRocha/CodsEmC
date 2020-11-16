#include<stdio.h>
#include<string.h>

void escreve_fwite (){

    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "wb");
    char texto[5];
    strcpy(texto, "ola");
  
    fclose(arquivo);

}

void escreve_rigistro(){
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "wb");

    typedef struct ponto_st{
        int y;
        int x;
    }Ponto;

    int quantidade = 3;
    Ponto dados[quantidade];
    dados [0].x = 0;
    dados [0].y = 0;
    dados [1].x = 10;
    dados [1].y = 20;
    dados [2].x = 20;
    dados [2].y = 0;

    fwrite(dados, sizeof(dados[0]), quantidade,arquivo);

}
int main (){

escreve_fwite();
//escreve_rigistro();

}