#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int anio, mes, dia;
  bool esBisiesto = false;

  printf("Ingresa el anio: ");
  scanf("%d", &anio);
  printf("Ingresa el mes: ");
  scanf("%d", &mes);
  printf("Ingresa el dia: ");
  scanf("%d", &dia);

  if(anio%4 == 0) {
    esBisiesto = true;
  }
  if((anio<1900 || anio>2100)||((mes<1 || mes>12))||(dia<1 || dia>31)) {
    printf("Fecha invalida");
  }
  else {
    if((esBisiesto==false && mes==2)&&(dia>=1 && dia<=29)) {
      printf("Fecha invalida");
    }
    else {
      printf("Fecha valida");
    }
  }
  return 0;
}
