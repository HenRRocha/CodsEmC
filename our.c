#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,verifica = 0,aux = 0;
  long count_if = 0;
 	double num = 0;

	 
 	printf("Digite um numero: ");
 	scanf("%lf",&num);
 	aux = num;

  count_if +=1;
// 	if(aux==num){
    	 
     	for(i=1;i<aux;i++){
        count_if +=1;
         	if(aux%i == 0){
             	verifica++;
         	}
     	}
	    count_if +=1;
     	if(num == 1 || verifica > 2 || num < 0){
         	printf("Numero nao e primo\n");
         	double num2=aux;
          
          count_if +=1;
         	if(num2<0)
            	printf("Proximo primo: 2\n");
           	 
         	for(double h=num2 + 1;h>0;h++){
            	int count=0;
            	for(double j=1;j<=h;j++){
                  count_if +=1;
                	if((int) h% (int) j==0)
                	count++;
            	}
              count_if += 1;
            	if(count==2){
                	printf("Proximo primo: %d\n", (int) h);
                	break;
            	}
            	 
    	}

            }else{
         	printf("Numero primo\n");
     	}
    	 
//	}else{
//  	printf("Nao e inteiro\n");
//	}
 printf("Contador de IF %d\n", count_if);
}