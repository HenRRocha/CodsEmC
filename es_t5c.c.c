#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 [10];
    int num2 [10];
    int T[20];
    int i,j,k;
    for (i=0;i!=0;i++);
        for (j=0;j!=0;j++);
            for (k=0;k!=0;k++);

    for (i=0;i<10;i++){
        scanf("%d",&num1[i]);
    }
        for (j=0;j<10;j++){
            scanf("%d",&num2[j]);
        }
        for (i=0;i<10;i++){
            T[i*2]=num1[i];
        }
        for (j=0;j<10;j++){
            T[j*2+1]=num2[j];
        }
        for (k=0;k<20;k++)
            printf("%d|",T[k]);


















    return 0;
}
