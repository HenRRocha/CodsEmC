#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<ctype.h>
#define N 100

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
    
    for (int i = 0; i < N; i++)
    {
        fgets(func[i].name, N, stdin);
            if (strcmp(func[i].name,"FIM\n")==0){
                break;
            }else{
                scanf("%f", &salario[i]);
                    scanf("%f", &bonus[i] );
                        func[i].money[i] = salario[i] + bonus[i];
                            tam ++;
            }          
    }
    for(int i = 0; i < tam ; i++){
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

    for(int i = 0, j = 0; i < tam, j < tam; i++){
        if(func[i].money[i] != 0.0){
            if (func[i].money[i] == func[j].money[j]){
                printf("Salario no Mes: R$ %.2f\n", func[i].money[i]);
                    printf("-%s", func[i].name);   
            }
        }
                        for (int j = 0; j < tam; j++){
                            if(func[i].money[i] != 0.0){
                                 if (func[i].money[i] == func[j].money[j]){
                                    printf("Salario no Mes: R$ %.2f\n", func[i].money[i]);
                                        printf("-%s", func[i].name);   
            }
        }
                        }

    }

   
      
    
   


    

 return 0 ;
}