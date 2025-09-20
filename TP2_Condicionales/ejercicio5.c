#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int ladoA, ladoB, ladoC;

  printf("Ingresa el lado A del triangulo: ");
  scanf("%d", &ladoA);
  printf("Ingresa el lado B del triangulo: ");
  scanf("%d", &ladoB);
  printf("Ingresa el lado C del triangulo: ");
  scanf("%d", &ladoC);

  if(ladoA == ladoB && ladoA == ladoC) {
    printf("El triangulo es equilatero");
  }
  else {
    if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {
      printf("El triangulo es isosceles");
    }
    else {
      printf("El triangulo es escaleno");
    }
  }
  return 0;
}
