#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int valorHora, tiempoTrabajado, sueldo;
  const int PREMIO_1 = 100, PREMIO_2 = 200;

  printf("Ingresa el valor de la hora: ");
  scanf("%d", &valorHora);
  printf("Ingresa el tiempo trabajado del empleado (en horas): ");
  scanf("%d", &tiempoTrabajado);

  if(tiempoTrabajado > 150) {
    sueldo = (valorHora*tiempoTrabajado)+PREMIO_2;
    printf("\nSueldo + Bonificacion 2: %d", sueldo);
  }
  else {
    if(tiempoTrabajado > 50) {
      sueldo = (valorHora*tiempoTrabajado)+PREMIO_1;
      printf("\nSueldo + Bonificacion 1: %d", sueldo);
    }
    else {
      sueldo = valorHora*tiempoTrabajado;
      printf("\nSueldo: %d", sueldo);
    }
  }
  return 0;
}
