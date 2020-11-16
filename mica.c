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

typedef struct disciplina
{
	char codigo[5];
	char nome[50];
	
}disciplina;

typedef struct matricula
{
	int ra;
	char codigo[5];
}matricula;

void CadastrarAluno (int *ra_aluno, char *nome_aluno, int *ano_aluno, char *cidade_aluno, char *estado_aluno)
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

bool ListarAluno (int *ra_aluno, bool exibir_aluno)
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
					if(exibir_aluno)
						printf("%s,%d,%s,%s",a.nome,a.ano,a.cidade,a.estado); //Tratar o lixo que aparece
      				return 1;
    			}	
  			}
		}
	}

	printf("Aluno inexistente"); 
	return 0;	
}

bool ListarAlunos ()
{	
	FILE *saida;
	saida=fopen("cadastro.txt", "rb+"); 
	
	cadastro_alunos a;
	
	bool encontrou = false;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&a, sizeof(a), 1, saida);
  			if (!feof(saida))
  			{
  				printf("%s,%d,%s,%s",a.nome,a.ano,a.cidade,a.estado); //Tratar o lixo que aparece
      			encontrou=true;
			}
  			
		}
	}
	
	if(!encontrou)
		printf("Nao ha alunos cadastrados"); 
		
	return 0;	
}

void CadastrarDisciplina (char *codigo_disciplina, char *nome_disciplina)
{	
	FILE *saida;
	saida=fopen("disciplinas.txt", "rb+"); 
	
	disciplina d;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&d, sizeof(d), 1, saida);
  			
  			if (!feof(saida)) 
			{
    			if ((strcmp(d.codigo, codigo_disciplina)==0))
				{
     				printf("Disciplina ja cadastrada: %s %s\n", d.codigo, d.nome);
      				return;
    			}	
  			}
		}
	}
	else	
		saida=fopen("disciplinas.txt", "wb"); 


	strcpy(d.nome, nome_disciplina);
	strcpy(d.codigo, codigo_disciplina);
	fwrite(&d, sizeof(d), 1, saida);

	
	fclose(saida);	
}

void AlterarDisciplina (char *codigo_disciplina, char *nome_disciplina)
{	
	FILE *saida;
	saida=fopen("disciplinas.txt", "rb+"); 
	
	disciplina d;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&d, sizeof(d), 1, saida);

  			if (!feof(saida)) 
			{
    			if (strcmp(d.codigo, codigo_disciplina)==0) 
				{
					strcpy(d.nome, nome_disciplina);
					strcpy(d.codigo, codigo_disciplina);
					fseek(saida, -sizeof(d), SEEK_CUR);
					fwrite(&d, sizeof(d), 1, saida);
					fclose(saida);
      				return;
    			}	
  			}
		}
	}

	printf("Codigo informado nao cadastrado"); 	
}

bool ListarDisciplina (char *codigo_disciplina, bool exibir_disciplina)
{	
	FILE *saida;
	saida=fopen("disciplinas.txt", "rb+"); 
	
	disciplina d;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&d, sizeof(d), 1, saida);

  			if (!feof(saida)) 
			{
    			if (strcmp(d.codigo, codigo_disciplina)==0) 
				{
					if(exibir_disciplina)
						printf("%s, %s",d.codigo,d.nome); //Tratar o lixo que aparece
      				return 1;
    			}	
  			}
		}
	}

	printf("Disciplina inexistente."); 
	return 0;	
}

void ListarDisciplinas ()
{	
	FILE *saida;
	saida=fopen("disciplinas.txt", "rb+"); 
	
	disciplina d;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&d, sizeof(d), 1, saida);

  			if (!feof(saida)) 
			{
    			printf("%s, %s",d.codigo,d.nome); //Tratar o lixo que aparece
      			return;
  			}
		}
	}

	printf("Nao ha disciplinas cadastradas."); 	
}

void Matricular (int *ra_aluno, char *codigo_disciplina)
{	
	if(!ListarAluno(ra_aluno, false))
		return;
		
	if(!ListarDisciplina(codigo_disciplina, false))
		return;

	FILE *saida;
	saida=fopen("matriculas.txt", "rb+"); 
	
	matricula m;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&m, sizeof(m), 1, saida);

  			if (!feof(saida)) 
			{
    			if (m.ra == ra_aluno && (strcmp(m.codigo, codigo_disciplina)==0)) 
				{
     				printf("Aluno ja matriculado: %d %s\n", m.ra, m.codigo);
      				return;
    			}	
  			}
		}
	}
	else	
		saida=fopen("matriculas.txt", "wb"); 

	m.ra = ra_aluno;
	strcpy(m.codigo, codigo_disciplina);
	fwrite(&m, sizeof(m), 1, saida);

	fclose(saida);	
}

void ListarAlunosMatriculados (char *codigo_disciplina)
{	
	if(!ListarDisciplina(codigo_disciplina, false))
		return;


	FILE *saida;
	saida=fopen("matriculas.txt", "rb+"); 
	
	matricula m;
	bool encontrou = false;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&m, sizeof(m), 1, saida);

  			if (!feof(saida)) 
			{
    			if ((strcmp(m.codigo, codigo_disciplina)==0)) 
				{
     				printf("%d \n", m.ra);
      				encontrou = true;
    			}	
  			}
		}
	}

	if(!encontrou)
		printf("Disciplina sem alunos matriculados.");

	fclose(saida);	
}

void ListarDisciplinasMatriculadas (int *ra_aluno)
{	
	if(!ListarAluno(ra_aluno, false))
		return;


	FILE *saida;
	saida=fopen("matriculas.txt", "rb+"); 
	
	matricula m;
	bool encontrou = false;
	
	if(saida)
	{
		while(!feof(saida)) 
		{
  			fread(&m, sizeof(m), 1, saida);

  			if (!feof(saida)) 
			{
    			if (m.ra == ra_aluno) 
				{
     				printf("%s \n", m.codigo);
      				encontrou = true;
    			}	
  			}
		}
	}

	if(!encontrou)
		printf("Aluno não matriculado em disciplinas.");

	fclose(saida);	
}

int main(int argc, char *argv[]) 
{
	char funcao[50];
	int ra;
	char nome[50];
	char codigo[5];
	int ano;
	char cidade[50];
	char estado[2];
	
	/*printf("nome da funcao: ");
	scanf("%s",&funcao);*/
	
	strcpy(funcao,argv[1]);
	
	if((strcmp(funcao, "-CadastrarAluno")==0) || (strcmp(funcao, "-AlterarAluno")==0) )
	{		
		ra=atoi(argv[2]);
		strcpy(nome,argv[3]);
		ano=atoi(argv[4]);
		strcpy(cidade,argv[5]);
		strcpy(estado,argv[6]);
		
		
		/*printf("ra: ");
		scanf("%d",&ra);
		printf("nome: ");
		scanf("%s",&nome);
		printf("ano: ");
		scanf("%d",&ano);
		printf("cidade: ");
		scanf("%s",&cidade);
		printf("estado: ");
		scanf("%s",&estado);*/
		
		if(strcmp(funcao, "-CadastrarAluno")==0)
			CadastrarAluno(ra,nome,ano,cidade,estado);
		else
			AlterarAluno(ra,nome,ano,cidade,estado);
	}
	else if(strcmp(funcao, "-ListarAlunos")==0)
	{
		ListarAlunos();
	}
	else if((strcmp(funcao, "-DescadastrarAluno")==0) || (strcmp(funcao, "-ListarAluno")==0))
	{		
		ra=atoi(argv[2]);		
		
		/*printf("ra: ");
		scanf("%d",&ra);*/
		
		if(strcmp(funcao, "-DescadastrarAluno")==0)
			DescadastrarAluno(ra);
		else
			ListarAluno(ra, true);
	}
	else if((strcmp(funcao, "-CadastrarDisciplina")==0) || (strcmp(funcao, "-AlterarDisciplina")==0) )
	{		
		/*printf("codigo: ");
		scanf("%s",&codigo);
		printf("nome: ");
		scanf("%s",&nome);	*/
		
		strcpy(codigo,argv[2]);
		strcpy(nome,argv[3]);	
		
		if(strcmp(funcao, "-CadastrarDisciplina")==0)
			CadastrarDisciplina(codigo,nome);
		else
			AlterarDisciplina(codigo,nome);
	}
	else if(strcmp(funcao, "-ListarDisciplina")==0)
	{		
		strcpy(codigo,argv[2]);
		
		/*printf("codigo: ");
		scanf("%s",&codigo);*/
		ListarDisciplina(codigo, true);
	}
	else if(strcmp(funcao, "-ListarDisciplinas")==0) 
	{
		ListarDisciplinas();
	}
	else if(strcmp(funcao, "-Matricular")==0) 
	{
		/*printf("ra: ");
		scanf("%d",&ra);
		printf("codigo: ");
		scanf("%s",&codigo);*/
		
		ra=atoi(argv[2]);
		strcpy(codigo,argv[3]);
		
		Matricular(ra, codigo);
	}
	else if(strcmp(funcao, "-ListarAlunosMatriculados")==0) 
	{
		/*printf("codigo: ");
		scanf("%s",&codigo);*/
		
		strcpy(codigo,argv[2]);
		
		ListarAlunosMatriculados(codigo);
	}
	else if(strcmp(funcao, "-ListarMatriculaAluno")==0) 
	{
		/*printf("ra: ");
		scanf("%d",&ra);*/
		
		ra=atoi(argv[2]);
		
		ListarDisciplinasMatriculadas(ra);
	}
	
	
	return 0;
}