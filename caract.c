#include <stdio.h>

int main (){//le caractere 

    //definir variavel de arquivo 
    FILE *arquivo;
    
    //abrir arquivo 
    arquivo = fopen("teste.txt", "r");//r de read

    //ler 1 caractere
    char c;
    while(!feof(arquivo)){
    c = fgetc(arquivo);

    //escrever o caractere lido
    printf("caractere lido: %c | codigo ASCII %d \n", c, c);
    }
    //fechar arquivo
    fclose(arquivo);

}