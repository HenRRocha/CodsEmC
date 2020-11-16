#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void exemplocomcaraceteres() {
    FILE *f;

    f = fopen("minusculo.txt", "w");
    if (f == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    char texto[20] = "Meu programa";

    for(int i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f);
    }

    fclose(f);

    char c;

    f = fopen("arquivo.txt", "r");
    if (f == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    c = fgetc(f);
    while(!feof(f)) {
        printf("%c", c);
        c = fgetc(f);
    }

    fclose(f);
}

void workingWithFiles() {
    FILE *f1, *f2;
    f1 = fopen("minusculo.txt", "r");
    f2 = fopen("maiusculo.txt", "w");
    if(f1 == NULL || f2 == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    char c = fgetc(f1);
    while(c != EOF) {
        fputc(toupper(c), f2);
        c = fgetc(f1);
    }

    fclose(f1);
    fclose(f2);
}


void exemplofputs() {
    FILE *f;

    f = fopen("arquivo.txt", "w");
    if (f == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    char text[] = "Meu programa em C";

    int retorno = fputs(text, f);
    if (retorno == EOF) {
        printf("Erro na gravação\n");
    }
    fclose(f);
}

void exemplofgets() {
    char str[20];
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    char *result = fgets(str, 20, f);
    if(result == NULL) printf("Erro na leitura\n");
    else printf("%s", str);

    printf("\n");
    fclose(f);
}

void exemplofWrite() {
    FILE *f;
    f = fopen("arquivo.txt", "wb");
    if(f == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }

    int total_gravado, v[5] = {1,2,3,4,5};

    total_gravado = fwrite(v, sizeof(int), 5, f);
    if(total_gravado != 5) {
        printf("Erro na escrita do arquivo\n");
        exit(1);
    }

    fclose(f);
}

void exemploFwriteStruct() {
    struct aluno {
        int ra;
        char nome[20];
    };

    typedef struct aluno aluno;

    FILE *f;
    f = fopen("struct.txt", "wb");
    if(f == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    aluno aluno1 = {222182, "Matheus Cumpian"};
    fwrite(&aluno1, sizeof(aluno), 1, f);
    fclose(f);
}

void exemplofread() {
    struct aluno {
        int ra;
        char nome[20];
    };

    typedef struct aluno aluno;

    FILE *f;
    f = fopen("struct.txt", "rb");
    if(f == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    aluno aluno1;
    fread(&aluno1, sizeof(aluno), 1, f);
    printf("%s, %d", aluno1.nome, aluno1.ra);
    fclose(f);
}

int main() {

    //exemplofWrite();
    exemploFwriteStruct();
    exemplofread();
    return 0;
}


