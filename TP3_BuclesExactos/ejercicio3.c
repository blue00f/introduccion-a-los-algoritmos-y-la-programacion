#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float promedioGeneral, promedioPares, promedioImpares;
  int acumGeneral=0, acumPares=0, acumImpares=0, i, num;

  for(i=0; i<8; i++) {
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    acumGeneral+=num;
    if(num%2==0) {
      acumPares+=num;
    }
    else {
      acumImpares+=num;
    }
  }
  promedioGeneral = (float)acumGeneral/8;
  promedioPares = (float)acumPares/8;
  promedioImpares = (float)acumImpares/8;

  if(promedioGeneral>15) {
    printf("\nEl promedio general es mayor a 15: %.2f", promedioGeneral);
  }
  if(promedioPares>15) {
    printf("\nEl promedio de pares es mayor a 15: %.2f", promedioPares);
  }
  if(promedioImpares>15) {
    printf("\nEl promedio de impares es mayor a 15: %.2f", promedioImpares);
  }
  return 0;
}
