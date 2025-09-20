#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int cantidad=10, acumulador=0, positivos=0, negativos=0, ceros=0;
  int i, num;
  float promedio=0;

  for(i=0; i<cantidad; i++) {
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    if(num>0) {
      positivos++;
    }
    else {
      if(num<0) {
        negativos++;
      }
      else {
        ceros++;
      }
    }
  }
  printf("\nCantidad de positivos: %d", positivos);
  printf("\nCantidad de negativos: %d", negativos);
  printf("\nCantidad de ceros: %d", ceros);
  return 0;
}
