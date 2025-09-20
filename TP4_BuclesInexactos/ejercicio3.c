#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int acumPositivos=0, acumNegativos=0, numero;
    int contPositivos=0, contNegativos=0, contCeros=0;
    float promPositivos=0, promNegativos=0;
    char opc='S';

    while(opc=='S' || opc=='s') {
        printf("Ingrese el numero: ");
        scanf("%d", &numero);
        if(numero>0){
            contPositivos++;
            acumPositivos+=numero;
        }
        else {
            if(numero<0){
                contNegativos++;
                acumNegativos+=numero;
            }
            else {
                contCeros++;
            }
        }
        printf("Desea ingresar otro numero? (S/N): ");
        scanf(" %c", &opc);
    }
    promPositivos=(float)acumPositivos/(float)contPositivos;
    promNegativos=(float)acumNegativos/(float)contNegativos*(-1);
    printf("\nPromedio de positivos: %.2f", promPositivos);
    printf("\nPromedio de negativos: %.2f", promNegativos);
    printf("\nCantidad de ceros: %d", contCeros);
    return 0;
}
