#include <stdio.h>
#define pi 3.14159

int main ()
{
    int raio = 0 ;
    float volume = 0 ; 
    scanf (" %d ", &raio );
    volume = ( ( 4.0 / 3) * pi * raio * raio * raio ); 
    printf (" %4.2f \n ", volume );

    return 0 ;

}