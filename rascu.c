if(saida)// ???
	{
		while(!feof(saida)) 
		{
  			fread(&A, sizeof(A), 1, saida);

  			if (!feof(saida)) 
			{
    			if (A.RA == ra_aluno) 
				{
     				printf("Aluno ja cadastrado: %d %s\n", a.ra, a.nome);
      				return;
    			}	
  			}
		}
	}
	else{
		saida=fopen("cadastro.txt", "wb"); 

	A.RA = ra_aluno;

    strcpy(A.nome, nome_aluno);
	A.ano = ano_aluno;
	strcpy(A.cidade, cidade_aluno);
	strcpy(A.estado, estado_aluno);
	A.cadastrado = 1;
	fwrite(&A, sizeof(A), 1, saida);    

	fclose(saida);
    }
