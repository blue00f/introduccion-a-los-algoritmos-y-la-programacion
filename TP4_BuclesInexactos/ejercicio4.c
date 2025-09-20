#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int numeroFactura=-1, numeroArticulo;
    bool banderaUsoFactura1=false, banderaUsoFactura2=false, banderaUsoFactura3=false;
    int cantVendida1=0, cantVendida2=0, cantVendida3=0;
    int precioUnitario1, precioUnitario2, precioUnitario3;
    int gananciasFactura1=0, gananciasFactura2=0, gananciasFactura3=0;
    int articuloDeFactura1=0, articuloDeFactura2=0, articuloDeFactura3=0;

    while(numeroFactura!=0){
        printf("\nFactura (1-3) (0 para salir): ");
        scanf("%d", &numeroFactura);
        if(numeroFactura==0){
            break;
        }
        if(numeroFactura==1 && banderaUsoFactura1==true){
            printf("Factura ya asignada a un articulo\n");
            continue;
        }
        else {
            if(numeroFactura==2 && banderaUsoFactura2==true){
                printf("Factura ya asignada a un articulo\n");
                continue;
            }
            else {
                if(numeroFactura==3 && banderaUsoFactura3==true){
                    printf("Factura ya asignada a un articulo\n");
                    continue;
                }
            }
        }

        printf("FAC%d - Articulo (1-3): ", numeroFactura);
        scanf("%d", &numeroArticulo);
        if(numeroFactura==1 && banderaUsoFactura1==false){
            banderaUsoFactura1=true;
            printf("Cantidad vendida: ");
            scanf("%d", &cantVendida1);
            printf("Precio unitario: ");
            scanf("%d", &precioUnitario1);
            articuloDeFactura1=numeroArticulo;
        }
        else {
            if(numeroFactura==2 && banderaUsoFactura2==false){
                banderaUsoFactura2=true;
                printf("Cantidad vendida: ");
                scanf("%d", &cantVendida2);
                printf("Precio unitario: ");
                scanf("%d", &precioUnitario2);
                articuloDeFactura2=numeroArticulo;
            }
            else{
                if(numeroFactura==3 && banderaUsoFactura3==false){
                    banderaUsoFactura3=true;
                    printf("Cantidad vendida: ");
                    scanf("%d", &cantVendida3);
                    printf("Precio unitario: ");
                    scanf("%d", &precioUnitario3);
                    articuloDeFactura3=numeroArticulo;
                }
            }
        }
    }
    gananciasFactura1=cantVendida1*precioUnitario1;
    gananciasFactura2=cantVendida2*precioUnitario2;
    gananciasFactura3=cantVendida3*precioUnitario3;
    printf("\nGanancias FAC1-ART%d: $%d", articuloDeFactura1, gananciasFactura1);
    printf("\nGanancias FAC2-ART%d: $%d", articuloDeFactura2, gananciasFactura2);
    printf("\nGanancias FAC3-ART%d: $%d", articuloDeFactura3, gananciasFactura3);
    return 0;
}
