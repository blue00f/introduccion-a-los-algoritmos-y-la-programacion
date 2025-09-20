#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int cantidadVendida[10];
    int totalVendido[10];
    int codProducto=0;
    int importe=0;
    int i=0;

    // Inicializamos los elementos del vector en 0
    for(i=0; i<10; i++){
        cantidadVendida[i]=0;
        totalVendido[i]=0;
    }

    printf("Ingrese el codigo de producto: ");
    scanf("%d", &codProducto);

    while(codProducto!=0){
        printf("Ingrese importe de la venta: ");
        scanf("%d", &importe);

        /*
            El usuario no sabe que el array empieza por 0,
            por lo que tenemos que restarle 1 para que guarde en la posicion correcta
        */
        cantidadVendida[codProducto-1]++;
        totalVendido[codProducto-1]+=importe;

        printf("\nIngrese el codigo de producto: ");
        scanf("%d", &codProducto);
    }

    for(i=0; i<10; i++){
        printf("Para el producto %d se vendieron %d unidades por un total de %d\n", i, cantidadVendida[i], totalVendido[i]);
    }
    return 0;
}
