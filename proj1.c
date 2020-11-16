#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <assert.h>

int checkPrimo(int numero);

int checkPrimo(int numero) {
  int resultado = 0;
  for(int i = 2; i<= numero/2; i++) {
        resultado += numero%i ==0;
  }
  return resultado;
}

int main () {
  int numero;

  printf("Digite um numero inteiro\n");
  scanf("%d", &numero);


  if (numero < 0) {
    printf("%d não é um número primo\n", numero);
    return 0;
  } else if (checkPrimo(numero) == 0) {
      printf("%d é um número primo\n", numero);
    return 0;
  }
    printf("%d não é um número primo\n", numero);
  return 0;
}

