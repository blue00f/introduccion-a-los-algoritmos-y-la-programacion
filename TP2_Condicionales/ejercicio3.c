#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int valor1, valor2, producto;

  printf("Ingresa el valor 1: ");
  scanf("%d", &valor1);
  printf("Ingresa el valor 2: ");
  scanf("%d", &valor2);

  if(valor1 > valor2) {
    producto = valor1*valor2;
    printf("Producto: %d", producto);
  }
  else {
    if(valor1 == valor2) {
      printf("Son iguales %d y %d", valor1, valor2);
    }
  }
  return 0;
}
