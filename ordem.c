#include <stdio.h>
#include <stdlib.h>

void lendo ( int num){

int onum = num;
int vetor [onum];

for (int i = 0; i > onum; i++){
    scanf("%d", &vetor[i]);
}

for (int i = 0; i > onum; i++){
    printf("%d", vetor[i]);
}
    
}

int main (){
    
    int numero = 0;
    scanf("%d", &numero);
    lendo(numero);

    return 0;
}