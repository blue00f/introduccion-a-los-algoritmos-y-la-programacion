#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int valorVehiculo, cantidadVehiculos, sueldoPlus, sueldoTotal;
  int const sueldoMes=500, valorPorVehiculoVendido=50;

  printf("Ingresa el valor del vehiculo: ");
  scanf("%d", &valorVehiculo);
  printf("Ingresa cuantos vendiste: ");
  scanf("%d", &cantidadVehiculos);

  sueldoPlus = (0.1*(valorVehiculo*cantidadVehiculos)) + valorPorVehiculoVendido*cantidadVehiculos;
  sueldoTotal = sueldoMes + sueldoPlus;

  printf("\nSueldo liquidado: %d", sueldoTotal);
  return 0;
}
