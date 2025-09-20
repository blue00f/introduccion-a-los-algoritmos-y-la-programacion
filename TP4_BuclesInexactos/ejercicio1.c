#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int sueldo, suma=0, cont=0;
    bool opc=true;
    float promedio=0;
    while(opc==true) {
        printf("Ingrese el sueldo: ");
        scanf("%d", &sueldo);
        suma+=sueldo;
        cont++;
        printf("Ingresar otro sueldo (1/0): ");
        scanf("%d", &opc);
    }
    promedio=(float)suma/(float)cont;
    printf("\nLa suma de todos los sueldos es: %d", suma);
    printf("\nEl promedio de todos los sueldos es: %.2f", promedio);
    return 0;
}
