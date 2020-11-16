#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checarNumero(double numero) {
    int verifica = 0;
    int i =2;
    while((verifica == 0) && (i<=(numero/2))) {
        verifica += (int) numero%i ==0;
        i++;
    }  //com isso diminui as iterações
    return verifica;
}

int main()
{

    long int init = time(NULL);
    int count_if = 0;
    long int num = 0;
    char term;

    printf("Digite um numero: ");

    count_if ++;
    if(scanf("%ld%c", &num, &term) != 2 || term != '\n') {
        printf("Nao e inteiro\n");
        return 0;
    }

    count_if ++;
    if(num <2 || checarNumero(num) != 0){
        printf("Numero nao e primo\n");

       while (checarNumero(num)!=0 || num < 2) 
         num++;
       printf("Proximo primo: %ld\n", num);
    } 

    else
        printf("Numero primo\n");

    printf("Contador de IF: %d\n", count_if);

    long int end = time(NULL);
    printf("Tempo: %ld s\n", (end-init));
}
