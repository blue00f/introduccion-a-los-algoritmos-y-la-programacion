#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int edad1, altura1, edad2, altura2;

  printf("Ingresa la edad para la persona 1: ");
  scanf("%d", &edad1);
  printf("Ingresa la altura (en cm) para la persona 1: ");
  scanf("%d", &altura1);
  printf("\nIngresa la edad para la persona 2: ");
  scanf("%d", &edad2);
  printf("Ingresa la altura (en cm) para la persona 2: ");
  scanf("%d", &altura2);

  if(edad1 > edad2) {
    printf("\nAltura del de mayor edad: %d", altura1);
  }
  else {
    if(edad2 > edad1) {
      printf("\nAltura del de mayor edad: %d", altura2);
    }
    else {
      printf("\nAmbas edades son iguales");
    }
  }
  return 0;
}
