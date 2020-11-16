#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//manipulação de arquivos 
//visualizador de redes sociais 

void insere (){

  FILE *arquivo;
	FILE *destino;
  FILE *arquivo1;
	
	arquivo = fopen("arquivo.txt", "rb");
  arquivo1 = fopen("arquivo1.txt", "rb");
	destino = fopen("destino.txt", "wb");

  char c;
  char g;
	char caracter_velho = ',';
	char caracter_novo = '-';
  char f = ' ';
  int i = 0;
	
  g = fgetsc(arquivo1);

  while (!feof(arquivo1)){

    

  }


	c = fgetc(arquivo); // Pode ser feito tambem com fread
	while (!feof(arquivo)) {
		if(c == caracter_velho){
			fputc(caracter_novo,destino);
		}
		fputc(c, destino); // Pode ser feito tambem com fwrite
		c = fgetc(arquivo);
	}

  fclose(arquivo1);
	fclose(arquivo);
	fclose(destino);
}

void troca_caractere(char caractere_velho, char caractere_novo) {
	FILE *destino;
	destino = fopen("destino.txt","rb+");

	while (!feof(destino)) {
		char c = fgetc(destino);
		if (!feof(destino)) {
			//printf("%c\n",c);
			//system("pause");
			
			if (c == caractere_velho) {
				fseek(destino, -1, SEEK_CUR); // volta para 1 posicao anterior no arquivo
				fputc(caractere_novo,destino);
				fflush(destino); 
      }
    }
  }
} 
int main (){

  char caractere_old = ',';
	char caractere_new = '-';
  insere ();
  troca_caractere (caractere_old, caractere_new);

  return 0;  
}