#include <stdio.h>
#include <stdlib.h>

  struct Data {
    int dia;
    int mes;
    int ano;
  }data;

struct Data formula_pascoa (int y){
   struct Data data ;
    data.ano = y;
 //formula para o calculo do domingo de PASCOA
    int g = y % 19; g++;
    int c = y / 100; c++;
    int x = 3 * c / 4 - 12;
    int z = (8 * c + 5) / 25 - 5;
    int e = (11 * g + 20 + z - x) % 30;

    if ((e == 25 && g > 11) || e == 24){
        e++;
    }

    int n = 44 - e;

    if (n < 21){
        n = n + 30;
    }
    
    int d = (5 * y) / 4 - (x + 10);
    n = (n + 7) - ((d + n) % 7);

    if (n > 31){

        data.dia = n - 31;
    
    }else{

        data.dia = n;
   
    }
}    