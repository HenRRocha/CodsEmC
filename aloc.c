#include<stdio.h>
#include<stdlib.h>

float u = 0, v = 0 ;

float* produto_vetorial (float* u, float* v )
{
    float* p = (float*)malloc(3*sizeof(float));

    p[0] = u[1]*v[2] - v[1]*u[2];
    p[1] = u[2]*v[0] - v[2]*u[0];
    p[2] = u[0]*v[1] - v[0]*u[1];

    printf("%f", p);

 return p;   
}
int main ()
{
    scanf("%f", &u);
    scanf("%f", &v);

    float* produto_vetorial(float* u , float* v );
    
    

}