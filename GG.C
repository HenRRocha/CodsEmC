#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<ctype.h>
#define N 200
#define G 200




int main ()
{       
    float salario [N];
    float bonus [N];
    int tam = 0 ;

    typedef struct 
    {
        char name [N];
        float money [N];

    }funcionario ;

    funcionario func [N];
    funcionario func1 [N];
    
    typedef struct 
    {
        float money [N];
        char name [N];

    }lista ;

    lista A [N];
    lista B [G];
    
    for (int i = 0; i < N; i++)                                 //laço para entrada de dados 
    {
        fgets(func[i].name, N, stdin);
            if (strcmp(func[i].name,"FIM\n")==0){
                break;
            }else{
                scanf("%f", &salario[i]);
                    scanf("%f", &bonus[i] );
                        func[i].money[i] = salario[i] + bonus[i];   // soma do salario e bonus 
                            tam ++;
            }          
    }
    for(int i = 0; i < tam ; i++){                               //laço para copia para uma struct 
        if ((func[i].name != "NULL")&&(func[i].money[i]!=0)){
            stpcpy (func1[i].name,func[i].name);
                 func1[i].money[i] = func[i].money[i];
        }
    }

    for (int i = 0; i < N; i++){
        func[i].name[i] = 0;
            func[i].money[i] = 0.0;
    }

    for (int i = 0; i < tam; i++){
        stpcpy (func[i].name,func1[i].name);
            func[i].money[i] = func1[i].money[i];
    }

    printf("Folha de Pagamento\n");
    printf("\n");

    int j ;

    for(int i = 0, j = 0; i < tam, j < tam; i++, j++){
        if(func[i].money[i] != 0.0){
            
            if (func[i].money[i] == func[j].money[j]){
                A[i].money[i] = func[i].money[i];
                    strcpy(A[i].name, func[i].name);
            }
        }
    }
     


    int i = 0;
    int g = 0;
    int h = 0;
    int r = 0;
    
  
    
   while (g < tam){
       if ((A[i].name != 0)&&(A[i].money[i] != 0)){

           if(A[i].money[i] == A[h].money[h]){
               printf("Salario no Mes : R$ %.2f\n", A[i].money[i]);
                    for( r = 0; r < tam; r++){
                        if(A[r].money[r] == A[h].money[h]){
                            printf("-%s", A[r].name);
                            
                        }
                    }
            }else
            {
                
            }
            
       }
       printf("\n");
       i++;
       g++;
       h++;
   }

    int aux = 0;
    int x = 0;
    int y = 0;

    for( x = 0; x < tam; x++ )
  {
    for( y = x + 1; y < tam; y++ ) 
    {
      
      if ( B[x].money[x] > B[y].money[y] )
      {
         aux = B[x].money[x];
         B[x].money[x] = B[y].money[y];
         B[y].money[y] = aux;
      }
    }
  } 

  char AUX[N];

    for( x = 0; x < tam; x++ )
  {
    for( y = x + 1; y < tam; y++ ) 
    {
      
      if ( B[x].name > B[y].name )
      {
          strcpy(AUX[y] , B[x].name);
          strcpy(B[x].name , B[y].name);
          strcpy(B[y].name , AUX[y]);
      }
    }
  } 
   


   
   
   

 return 0 ;
}