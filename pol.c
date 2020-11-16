#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int grau ;  //variavel para o grau 
    float *v;  //ponteiro para o vetor 
    float x ;       //variavel para entrada de x 
    float res ;         //variavel para armazenar o valor 

    scanf("%d", &grau);     // entrada do valor do grau 

    v = (float*) malloc(grau * sizeof(float)); //alocação dinamica para o ponteiro apontando para o vetor 

    if (v == NULL){             //condição de verificação se alocação foi feita 
        printf("erro");
    }

    for (int i = 0 ; i <= grau; i++){       //laço para entrada de valores no vetor 
        scanf("%f", &v[i]);
    }

    scanf("%f", &x);        //entrada do valor de x 

    for(int i = 0; i <= grau; i++){     //laço para aplicação da formula 
        res += v[i] * pow(x,i);     //formula para o calculo com um operador composto e o comando pow para pontencia 
    }

    printf("%2.2f", res);       //impressão do resultado com duas casas após a virgula 



  return 0;
}