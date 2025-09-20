#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numeroFactura, importeFactura, suma=0;
    int contMiles=0, contDiezMiles=0, contRango1=0;
    float promedio=0;
    do {
        printf("\nNumero de factura: ");
        scanf("%d", &numeroFactura);
        if(numeroFactura==0){
            break;
        }
        printf("Importe de factura: ");
        scanf("%d", &importeFactura);
        suma+=importeFactura;
        if(importeFactura>1000 && importeFactura<10000) {
            contMiles++;
        }
        else {
            if(importeFactura>10000) {
                contDiezMiles++;
            }
            else {
                if(importeFactura>=400 && importeFactura<=700) {
                    contRango1++;
                }
            }
        }
    } while(numeroFactura==1);
    printf("\nImporte total: %d", suma);
    printf("\nImportes que superan $1000: %d", contMiles);
    printf("\nImportes que superan $10.000: %d", contDiezMiles);
    printf("\nImportes que estan entre $400 y $700: %d", contRango1);
    return 0;
}
