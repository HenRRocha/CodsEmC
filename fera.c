#include <stdio.h>

float volume_esfera () 
{
    float raio = 0 ;
    float volume = 0 ; 
    scanf (" %f ", &raio );
    volume = ( ( 4.0/3 ) * 3.14159 * raio *  raio * raio ); 
    printf (" %4.2f \n", volume );

    return volume ;
}
int main ()
{
    volume_esfera ();
     
    return 0 ;
}