#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int lado1, lado2, hipotenusa, perimetro, superficie;

  printf("Ingresa el lado 1 del triangulo: ");
  scanf("%d", &lado1);
  printf("Ingresa el lado 2 del triangulo: ");
  scanf("%d", &lado2);

  hipotenusa = sqrt((lado1*lado1)+(lado2*lado2));
  perimetro = lado1+lado2+hipotenusa;
  superficie = (lado1*lado2)/2;

  printf("\nHipotenusa del triangulo: %d", hipotenusa);
  printf("\nPerimetro del triangulo: %d", perimetro);
  printf("\nSuperficie del triangulo: %d", superficie);
  return 0;
}
