#include <stdio.h>
#include<stdlib.h>
#define N 20
int pro (int n , int *vnum);        //Protótipo para a função 

int main ()
{
    int num_do_vetor = 0;           //Numero do tamanho do vetor 
    int vnum [N];                       //Vetor para armazenar valores 
    int n = 0 ;
    scanf("%d", &num_do_vetor);      //Entrada do numero do vetor 

    for (int i = 0; i < num_do_vetor; i ++)             //Laço para a entrada dos valores no vetor 
    {
        scanf("%d", &vnum[i] );
    }
        num_do_vetor, vnum[N] = pro(n, vnum[N]);

int pro (int n , int *vnum)
{
    for (int i = 0 ; i < n; i ++)
    {
        int j = 1 ;
        if (vnum[i] < vnum[j] )
        {
            printf("%d", vnum[i]);
        }
        else 
        {
            printf("%d", vnum[j]);
        }
    }
}
 return 0 ;   
}