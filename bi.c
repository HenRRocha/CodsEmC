#include <stdio.h>
#include <stdlib.h>

int calculo_anobi(int ano) {
  if (ano % 100 == 0)
    ano /= 100;

  return ano % 4 == 0;
}