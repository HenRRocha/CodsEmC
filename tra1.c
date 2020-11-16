#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void arquivo_nome_pessoas(char *nome_arquivo_pessoas)
{
	//Abrir arquio
	FILE *arquivo;
	//strcat(nome_arquivo,".txt");
	arquivo=fopen(strcat(nome_arquivo_pessoas, ".txt"),"r"); //r = read
		
	//Ler 1 caractere
	char c;
	while (!feof(arquivo))
	{
		c=fgetc(arquivo);
		
		//Escrever o caractere lido na tela
		printf("%c",c);
	}
	
	//Fechar arquivo
	fclose(arquivo);
}

void arquivo_amizade(char *amizade)
{
	//Abrir arquio
	FILE *arquivo;
	//strcat(nome_arquivo,".txt");
	arquivo=fopen(strcat(amizade, ".txt"),"r"); //r = read
		
	//Ler 1 caractere
	char c;
	while (!feof(arquivo))
	{
		c=fgetc(arquivo);
		
		//Escrever o caractere lido na tela
		printf("%c",c);
	}

	
	printf("\n");
	//Fechar arquivo
	fclose(arquivo);
}



int main(int argc, char *argv[]) 
{
	char pessoa_cidade [100];
	char amizade [100];
	int opcao_arquivo;
	printf ("Digite o nome do arquivo de entrada para pessoas e cidades: ");
	gets(pessoa_cidade);
	printf ("Digite o nome do arquivo de entrada sobre amizades: ");
	gets(amizade);
	printf ("Escolha o tipo de gráfico: \n\t 1. \"-c\" para gráfico considerando cidades\n\t 2. \"-a\" para grafico considerando apenas amizade\n");
	scanf("%d",&opcao_arquivo);
	
	arquivo_nome_pessoas(pessoa_cidade);
	arquivo_amizade(amizade);
	
	return 0;
}