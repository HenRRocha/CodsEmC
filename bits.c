// programa que monstra binários em pontos flutuantes 
#include <stdio.h>
 

 int main (void)
 {
    int bits [32];
    float aux ;
    printf ("Digite o número ponto flutuante: \n ");
    scanf ("%f" , &aux );
    unsigned int *x;
    x = &aux ;    
    for (int bit=0; bit<32; bit++ )
    {
          bits[31-bit]=(*x)%2;
          (*x) = (*x) /2 ; 
    }
        printf ("Representação em ponto flutuante:\n");
    
    for (int bit= 0 ; bit < 32 ; bit ++ )
    {
        printf("%d", bits[bit]) ;
        if (bit == 0) printf ("+- (");
        if (bit == 1) printf ("+- ");
        if (bit == 8) printf ("+1)1.");
    }
    printf("\n");    
     

     return 0;
 }
