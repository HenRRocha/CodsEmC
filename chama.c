#include <stdio.h>


int main (){
    int a [5];
    printf("%ls\n", &a[0]);
    printf("%ls\n", &a[1]);
    printf("%ls\n", &a[2]);
    printf("%ls\n", &a[3]);
    printf("%d\n", &a[4]); // por que não vai %d e sim ls 

}