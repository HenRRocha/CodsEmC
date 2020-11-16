#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Troca um caractere por outro em um arquivo

void troca_caractere(char caractere_velho, char caractere_novo) {
	FILE *arquivo;
	arquivo = fopen("arquivo.txt","rb+");

	while (!feof(arquivo)) {
		char c = fgetc(arquivo);
		if (!feof(arquivo)) {
			printf("%c\n",c);
			//system("pause");
			
			if (c == caractere_velho) {
				fseek(arquivo, -1, SEEK_CUR); // volta para 1 posicao anterior no arquivo
				fputc(caractere_novo,arquivo);
				fflush(arquivo); 
/* "As you can see, ‘+’ requests a stream that can do both input and output. When using
such a stream, you must call fflush (see Section 12.20 [Stream Buffering], page 328)
or a file positioning function such as fseek (see Section 12.18 [File Positioning],
page 323) when switching from reading to writing or vice versa. Otherwise, internal
buffers might not be emptied properly." (Fonte: The GNU C Library Reference Manual, p.268) */
			}
		}
	}	
	fclose(arquivo);	
}

int copiar() {
	FILE *arquivo;
	FILE *destino;
	
	arquivo = fopen("arquivo.txt", "rb");
	destino = fopen("destino.txt", "wb");

	char d = ',';
	char e = '-';
	
	char c;
	c = fgetc(arquivo); // Pode ser feito tambem com fread
	while (!feof(arquivo)) {
		if(c == d){
			fputc(e,destino);
		}
		fputc(c, destino); // Pode ser feito tambem com fwrite
		c = fgetc(arquivo);
	}
	fclose(arquivo);
	fclose(destino);
}

int main (){
	char caractere_old = ',';
	char caractere_new = '-';
	//troca_caractere(caractere_old,caractere_new);
	copiar ();
}