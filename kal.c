#include <stdio.h>
#include <math.h>

float soma (float num1, char sinal, float num2 );
float sub  (float num3, char sinal, float num4 ); 
float divi (float num5, char sinal, float num6 );
float multi (float num7, char sinal,float num8 ); 
float poten (float numA, char sinal, float numB );

int main ()
{
    char sinal ;
    float numero1 = 0 , numero2 = 0;
    scanf("%f %c %f", &numero1, &sinal, &numero2  );
    if (sinal == '+')
    {
         printf (" %.3f ",soma (numero1, sinal, numero2));
    }else if (sinal == '-')
    {
       printf(" %.3f ", sub (numero1, sinal, numero2));
    }else if (sinal == '/')
    {
        printf(" %.3f ", divi (numero1, sinal, numero2));
    }else if (sinal == '*')
    {
        printf(" %.3f ", multi (numero1, sinal, numero2));
    }else if (sinal == '^')
    {
        printf(" %.3f ", poten (numero1, sinal, numero2));
    }


  return 0 ;  
}
float soma ( float num1, char sinal, float num2)
{  
    return (num1 + num2) ;
}
float sub ( float num3, char sinal, float num4)
{  
    return (num3 - num4) ;
}
float divi ( float num5, char sinal, float num6)
{  
    return (num5 / num6) ;
}
float multi ( float num7, char sinal, float num8)
{  
    return (num7 * num8) ;
}
float poten ( float numA, char sinal, float numB)
{  
    return ( (pow (numA, numB)));
}
