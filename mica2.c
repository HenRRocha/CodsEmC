#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct alunos
{
		int ra;
		char nome[50];
		int ano;
		char cidade[50];
		char estado[2];
		int cadastrado;
}cadastro_alunos;

void CadastrarAluno (int *ra_aluno, char *nome_aluno, int *ano_aluno, char *cidade_aluno, char *estado_aluno)
{
	FILE *saida;
	saida=fopen("cadastro.txt", "b+"); 
	
	cadastro_alunos a;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&a, sizeof(a), 1, saida);

  			if (!feof(saida)) 
			{
    			if (a.ra == ra_aluno) 
				{
     				printf("Aluno ja cadastrado: %d %s\n", a.ra, a.nome);
      				return;
    			}	
  			}
		}
	}
	else	
		saida=fopen("cadastro.txt", "wb"); 

	a.ra = ra_aluno;

	strcpy(a.nome, nome_aluno);
	a.ano = ano_aluno;
	strcpy(a.cidade, cidade_aluno);
	strcpy(a.estado, estado_aluno);
	a.cadastrado = 1;
	fwrite(&a, sizeof(a), 1, saida);

	
	fclose(saida);
	
}

void AlterarAluno (int *ra_aluno, char *nome_aluno, int *ano_aluno, char *cidade_aluno, char *estado_aluno)
{
	
	
	FILE *saida;
	saida=fopen("cadastro.txt", "rb+"); 
	
	cadastro_alunos a;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&a, sizeof(a), 1, saida);

  			if (!feof(saida)) 
			{
    			if (a.ra == ra_aluno) 
				{
					strcpy(a.nome, nome_aluno);
					a.ano = ano_aluno;
					strcpy(a.cidade, cidade_aluno);
					strcpy(a.estado, estado_aluno);
					a.cadastrado = 1;
					fseek(saida, -sizeof(a), SEEK_CUR);
					fwrite(&a, sizeof(a), 1, saida);
					fclose(saida);
      				return;
    			}	
  			}
		}
	}

		printf("RA informado nao cadastrado"); 
	
		
		
	
	
}

void DescadastrarAluno (int *ra_aluno)
{
	
	
	FILE *saida;
	saida=fopen("cadastro.txt", "rb+"); 
	
	cadastro_alunos a;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&a, sizeof(a), 1, saida);

  			if (!feof(saida)) 
			{
    			if (a.ra == ra_aluno) 
				{
					a.cadastrado = 0;
					fseek(saida, -sizeof(a), SEEK_CUR);
					fwrite(&a, sizeof(a), 1, saida);
					fclose(saida);
      				return;
    			}	
  			}
		}
	}

		printf("RA informado nao cadastrado"); 	
		
	
}

void ListarAluno (int *ra_aluno)
{
	
	
	FILE *saida;
	saida=fopen("cadastro.txt", "rb+"); 
	
	cadastro_alunos a;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&a, sizeof(a), 1, saida);

  			if (!feof(saida)) 
			{
    			if (a.ra == ra_aluno && a.cadastrado==1) 
				{
					printf("%s,%d,%s,%s",a.nome,a.ano,a.cidade,a.estado); //Tratar o lixo que aparece
      				return;
    			}	
  			}
		}
	}

		printf("Aluno inexistente"); 	
		
	
}

int main(int argc, char *argv[]) 
{
	char funcao[50];
	int ra;
	char nome[50];
	int ano;
	char cidade[50];
	char estado[2];
	
	strcpy(funcao,argv[1]);
	
	if((strcmp(funcao, "-CadastrarAluno")==0) || (strcmp(funcao, "-AlterarAluno")==0) )
	{
		
		ra=atoi(argv[2]);
		strcpy(nome,argv[3]);
		ano=atoi(argv[4]);
		strcpy(cidade,argv[5]);
		strcpy(estado,argv[6]);
		
		
		if(strcmp(funcao, "-CadastrarAluno")==0)
			CadastrarAluno(ra,nome,ano,cidade,estado);
		else
			AlterarAluno(ra,nome,ano,cidade,estado);
	}
	else if((strcmp(funcao, "-DescadastrarAluno")==0) || (strcmp(funcao, "-ListarAluno")==0))
	{
		ra=atoi(argv[2]);
	
		if(strcmp(funcao, "-DescadastrarAluno")==0)
			DescadastrarAluno(ra);
		else
			ListarAluno(ra);
	}
	
	return 0;
}