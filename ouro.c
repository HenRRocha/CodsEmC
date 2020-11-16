#include <stdio.h>
#include <stdlib.h>
int main()
{	
 	int i,verifica = 0,aux;
 	float num;
	int continicial = 0;
	 
 	printf("Digite um numero: ");
 	scanf("%f",&num);
 	aux = num;
	 
 	if(aux==num){
    	 
     	for(i=1;i<100;i++){
         	if(aux%i == 0){
             	verifica++;
         	}
     	}
     	if(num == 1 || verifica > 2 || num < 0){
         	printf("Numero nao e primo\n");
         	int num2=aux;
         	if(num2<0)
            	printf("Proximo primo: 2\n");
           	 
         	for(int h=num2 + 1;h>0;h++){
            	int count=0;
            	for(int j=1;j<=h;j++){
                	if(h%j==0)
                	count++;
            	}
            	if(count==2){
                	printf("Proximo primo: %d\n",h);
                	break;
            	}
    	}

            }else{
         	printf("Numero primo\n");
			 continicial++;
     	}
    	 
	}else{
    	printf("Nao e inteiro\n");
    	exit(0);
	}

	printf(" numero de IFs é %d ", continicial);
	 
}