#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int lado1, lado2, lado3, perimetro;

  printf("Ingresa el lado 1 del triangulo: ");
  scanf("%d", &lado1);
  printf("Ingresa el lado 2 del triangulo: ");
  scanf("%d", &lado2);
  printf("Ingresa el lado 3 del triangulo: ");
  scanf("%d", &lado3);

  perimetro = lado1 + lado2 + lado3;

  printf("\nPerimetro del triangulo: %d", perimetro);
  return 0;
}
