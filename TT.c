#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<ctype.h>
#define N 200
#define G 200

int h = 0;

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
               B[g].money[g] = A[h].money[h];
                    for( r = 0; r < tam; r++){
                        if(A[r].money[r] == A[h].money[h]){
                             strcpy(B[g].name , A[r].name);
                            
                        }
                    }
            }
       }
       i++;
       g++;
       h++;
   
 
    int m = 0;
    int l = 0;
    int kk ;
   while(kk < tam)
       if (B[l].money[m] = B[m].money[m]){
           printf("%.2f\n", B[m].money[m]);
                for(int p = 0; p < tam; p++){
                    printf("%s", B[p].name );
                }
       }
       kk++;
   }


   
   
   

 return 0 ;
}