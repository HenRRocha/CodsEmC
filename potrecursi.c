#include <stdio.h>
#include <stdlib.h>

int potencia_dois (int n){
    
    int resultado;   
    if ( n == 0){
        resultado = 1;
    }else if(n==1){
        resultado = 2;
    }else{
        resultado = 2 * potencia_dois(n-1); 
    }
    return resultado;
}
int main (){
    int i = 0;
    printf("valor ?");
    scanf("%d", &i);
    printf("%d", potencia_dois(i));

    return 0 ;
}