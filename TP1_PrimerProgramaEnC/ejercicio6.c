#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int base, altura, diagonalPrincipal, superficie, perimetro;

  printf("Ingresa la base del rectangulo: ");
  scanf("%d", &base);
  printf("Ingresa la altura del rectangulo: ");
  scanf("%d", &altura);

  diagonalPrincipal = sqrt((base*base)+(altura*altura));
  superficie = base*altura;
  perimetro = (base+altura)*2;

  printf("\nDiagonal del rectangulo: %d", diagonalPrincipal);
  printf("\nSuperficie del rectangulo: %d", superficie);
  printf("\nPerimetro del rectangulo: %d", perimetro);
  return 0;
}
