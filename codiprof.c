void troca_caractere(char caractere_velho, char caractere_novo) {
	FILE *arq;
	arq = fopen("teste.txt","rb+");
	
	//int e_fim = 0;// falso
	while (!feof(arq)) {
		char c = fgetc(arq);
		
		//e_fim = feof(arq);
		if (!feof(arq)) {
			printf("%c %d\n",c, ftell(arq));
			
			if (c == caractere_velho) {
				fseek(arq, -1, SEEK_CUR); // volta para 1 posicao anterior no arquivo
				fputc(caractere_novo,arq);
			}
		}
	}	
	fclose(arq);	
}