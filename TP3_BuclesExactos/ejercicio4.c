#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int rangoUno=0, rangoDos=0, rangoTres=0, rangoCuatro=0, cantidad=15;
  float porcentajeRangoUno=0, porcentajeRangoDos=0, porcentajeRangoTres=0, porcentajeRangoCuatro=0;
  int i, num;

  for(i=0; i<cantidad; i++) {
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    if(num>=1 && num<=10) {
      rangoUno++;
    }
    else {
      if(num>=11 && num<=20) {
        rangoDos++;
      }
      else {
        if(num>=21 && num<=30) {
          rangoTres++;
        }
        else {
          rangoCuatro++;
        }
      }
    }
  }
  porcentajeRangoUno=((float)rangoUno/(float)cantidad)*100;
  porcentajeRangoDos=((float)rangoDos/(float)cantidad)*100;
  porcentajeRangoTres=((float)rangoTres/(float)cantidad)*100;
  porcentajeRangoCuatro=((float)rangoCuatro/(float)cantidad)*100;

  printf("\nPorcentaje de los numeros entre 1 y 10: %.2f%%", porcentajeRangoUno);
  printf("\nPorcentaje de los numeros entre 10 y 20: %.2f%%", porcentajeRangoDos);
  printf("\nPorcentaje de los numeros entre 20 y 30: %.2f%%", porcentajeRangoTres);
  printf("\nPorcentaje de los numeros mayores a 30: %.2f%%", porcentajeRangoCuatro);
  return 0;
}
