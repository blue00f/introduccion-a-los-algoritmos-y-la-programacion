#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int cantidad=25, acumTotal=0, acumMayores=0, contMayores=0, patente, monto;
  float porcentajeMayores;
  int i, num;

  for(i=0; i<cantidad; i++) {
    printf("Patente: ");
    scanf("%d", &patente);
    printf("Monto de la multa: ");
    scanf("%d", &monto);
    acumTotal+=monto;

    if(monto>40000) {
      contMayores++;
      acumMayores+=monto;
    }
  }
  porcentajeMayores=((float)acumMayores*100)/(float)acumTotal;

  printf("\nCantidad de montos que superan $40.000: %d", contMayores);
  printf("\nPorcentaje de la suma de los montos mayores a $40.000: %.2f%%", porcentajeMayores);
  return 0;
}
