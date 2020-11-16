#include <stdio.h>
#include <stdlib.h>

int main (){//escrever caracteres 

    //definir variavel de arquivo 
    FILE *arquivo;
    
    //abrir arquivo 
    arquivo = fopen("teste.txt", "a");//w de whrite

    //escreva de a a 
    char c;
    for(int i = 0; i< 25; i++){
        c = 65 + i;
        fputc(c, arquivo);

        //escrever o caractere lido
    printf("caractere lido: %c | codigo ASCII %d \n", c, c);
    }

    //fechar arquivo
    fclose(arquivo);

}