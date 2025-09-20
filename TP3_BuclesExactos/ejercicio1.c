#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int cantidad=10, acumulador=0;
  int i, num;
  float promedio=0;

  for(i=0; i<cantidad; i++) {
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    acumulador+=num;
  }
  promedio = (float)acumulador/(float)cantidad;
  printf("Promedio de numeros: %.2f", promedio);
  return 0;
}
