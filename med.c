#include <stdio.h>
#include <math.h> //OBS compilar comm -lm 

float media ()
{ 
    float num1 = 0 , num2 = 0, conta1 = 0 ;
    float res1 = 0 ;
    scanf(" %f %f ", &num1, &num2);
 
    conta1 = ( num1 + num2 ) / 2 ;
    res1 = conta1 ;

    printf("%1.3f", res1 );

    return 0 ; 
}
float mediaa ()
{
    float num3 = 0 , num4 = 0, conta2 = 0 ;
    float res2 = 0 ;
    scanf(" %f %f ", &num3, &num4);
 
    conta2 = sqrt(num3) * sqrt (num4) ;
    res2 = conta2 ;

    printf("%1.3f", res2 );
     
    return 0;
}
int main ()
{
    char letra = 'A' ;
    scanf(" %c ", &letra );
    if (letra == 'A' )
    {
        media ();
    }
    if (letra == 'B')
    {
        mediaa ();
    }


    return 0 ;
}