#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int valor1;

  printf("Ingresa un valor: ");
  scanf("%d", &valor1);

  if(valor1 > 0) {
    printf("Es positivo");
  }
  else {
    if(valor1 < 0) {
      printf("Es negativo");
    }
    else {
      printf("Es cero");
    }
  }
  return 0;
}
