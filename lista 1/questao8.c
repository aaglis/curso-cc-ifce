#include <stdio.h>
#include <math.h>

int main(void) {

  int numeroDigitado, quadrado;

  printf("digite um numero inteiro:\n");
  scanf("%d", &numeroDigitado);

  quadrado = pow(numeroDigitado, 2);

  printf("Voce digitou o numero: %d\n", numeroDigitado);
  printf("O valor deste numero ao quadrado e: %d", quadrado);
  
  return 0;
}


