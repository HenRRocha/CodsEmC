void trocaChar(char caractereInicial, char caractereFinal) {
    FILE *arquivo;
    arquivo = fopen("teste.txt", "rb+");
    while (!feof(arquivo))
    {
        char c = fgetc(arquivo);
        if(!feof(arquivo)){
            if(c==caractereInicial){
                fseek(arquivo, -1, SEEK_CUR); //Volta 1 posicao do arquivo a partir da atual
                fputc(caractereFinal,arquivo);
            }
        }
    }
    fclose(arquivo);  
}