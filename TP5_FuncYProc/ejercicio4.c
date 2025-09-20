#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calcularGanancia(int precio, int cantidadVentas);
void infoVentas(int acumGanancias, int acumVentas, int numeroProductoMenor, int ventaMenor);

int main(int argc, char *argv[]) {
    int opc=1;
    bool primeraIteracion=false;
    int numProducto, precioProducto, cantVentasProducto=0;
    int ventaMenor, acumGanancias=0, acumVentas=0, numProductoMenor;

    while(opc==1){
        printf("\nNumero de producto: ");
        scanf("%d", &numProducto);
        printf("Precio de producto: ");
        scanf("%d", &precioProducto);
        printf("Cantidad de ventas del producto: ");
        scanf("%d", &cantVentasProducto);

        if(primeraIteracion==false){
            ventaMenor=cantVentasProducto;
            primeraIteracion=true;
        }
        acumGanancias+=calcularGanancia(precioProducto, cantVentasProducto);
        acumVentas+=cantVentasProducto;

        if(cantVentasProducto<ventaMenor){
            ventaMenor=cantVentasProducto;
            numProductoMenor=numProducto;
        }

        printf("Ingresar otro producto (1-Si/0-No): ");
        scanf("%d", &opc);
    }

    infoVentas(acumGanancias,acumVentas,numProductoMenor,ventaMenor);
    return 0;
}

int calcularGanancia(int precio, int cantidadVenta){
    return precio*cantidadVenta;
}

void infoVentas(int acumGanancias, int acumVentas, int numeroProductoMenor, int ventaMenor){
    printf("\nGanancias totales: %d", acumGanancias);
    printf("\nTotal de ventas realizadas: %d", acumVentas);
    printf("\nNumero de producto menos vendido: %d con %d ventas", numeroProductoMenor, ventaMenor);
}
