#include <stdio.h>
#define N 10 

int cube (int A[N], int B[N]);
int main ()
{
    int A[N], B[N];
    for (int i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &A[i]);
    }
        for (int i = 0 ; i < 10 ; i++)
        {
            B[i] = 0;
        }
            for (int i = 0 ; i < 10 ; i++)
            {
                
                B[i] = A[i] * A[i] * A[i];
                printf("%d\n", B[i]);
            }
            
     
    return 0;
}
