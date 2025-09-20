#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int valor1, valor2, resta;

  printf("Ingresa el valor 1: ");
  scanf("%d", &valor1);
  printf("Ingresa el valor 2: ");
  scanf("%d", &valor2);

  if(valor1 > valor2) {
    resta = valor1-valor2;
    printf("Resta: %d", resta);
  }
  else {
    if(valor2 > valor1) {
      resta = valor2-valor1;
      printf("Resta: %d", resta);
    }
  }
  return 0;
}
