#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int operando1, operando2, suma;

  printf("Ingresa el valor del operando 1: ");
  scanf("%d", &operando1);
  printf("Ingresa el valor del operando 2: ");
  scanf("%d", &operando2);

  suma = operando1 + operando2;
  printf("\nEl resultado de la suma es: %d\n", suma);
  return 0;
}
