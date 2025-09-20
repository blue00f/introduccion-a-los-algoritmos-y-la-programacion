#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int operando1, operando2, suma, producto, resta;

  printf("Ingresa el valor del operando 1: ");
  scanf("%d", &operando1);
  printf("Ingresa el valor del operando 2: ");
  scanf("%d", &operando2);

  suma = operando1 + operando2;
  producto = operando1 * operando2;
  resta = operando1 - operando2;

  printf("\nSuma: %d", suma);
  printf("\nProducto: %d", producto);
  printf("\nResta: %d", resta);
  return 0;
}
