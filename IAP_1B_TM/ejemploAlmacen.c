#include <stdio.h>
#include <stdlib.h>

void MostrarMatriz(int codigo_producto[], int precio_producto[], int cantidad_productos);
int BuscarProducto(int codigo_producto[], int codigo_buscado, int cantidad_productos);
void ActualizarTotal(int *total_puntero, int monto_venta);

int main(int argc, char** argv) {
	int cantidad_productos=4;
	int codigo_producto[cantidad_productos];
	int precio_producto[cantidad_productos];
	int codigo,precio,numero_venta;
	int monto_venta=0,cantidad_venta;
	int monto_diario=0, *total_puntero;
	int i, indiceBuscado;
	
	total_puntero = &monto_diario; // total_puntero guarda la DIRECCION de memoria de monto_diario
	
	MostrarMatriz(codigo_producto,precio_producto,cantidad_productos);
	for(i=0;i<cantidad_productos;i++){
		codigo_producto[i] = 0;
		precio_producto[i] = 0;
	}

	for(i=0;i<cantidad_productos;i++){
		printf("\nIngrese el codigo del producto: ");
		scanf("%d",&codigo);
		printf("Ingrese el precio del producto: ");
		scanf("%d",&precio);
		
		// Es posible realizar validaciones a la variable auxiliar antes de meterlo en el vector
		codigo_producto[i] = codigo;
		precio_producto[i] = precio;
	}
	
	// Nos aseguramos de que numero_venta tenga un valor para entrar o no al while
	printf("Ingrese el numero de venta: ");
	scanf("%d",&numero_venta);
	
	int indice_buscado;
	while(numero_venta!=0){
		printf("Ingrese el codigo del producto que desea vender: ");
		scanf("%d",&codigo);
		
		indiceBuscado = BuscarProducto(codigo_producto, codigo, cantidad_productos);
		if(indiceBuscado == -1){
			printf("\nProducto no encontrado");
		} else {
			printf("\nIngrese la cantidad del producto con codigo %d: ", indiceBuscado);
			scanf("%d",&cantidad_venta);
			monto_venta = precio_producto[indiceBuscado] * cantidad_venta;
			printf("\nEl monto de la venta es: %d",monto_venta);
			ActualizarTotal(total_puntero,monto_venta);
		}
		printf("Ingrese el numero de venta: ");
		scanf("%d",&numero_venta);
	}
	
	printf("\nEn el dia se recaudo un total de: %d",monto_diario);
	MostrarMatriz(codigo_producto,precio_producto,cantidad_productos);
	return 0;
}

void MostrarMatriz(int codigo_producto[], int precio_producto[], int cantidad_productos){
	int i; // variable de ambito local
	for(i=0;i<cantidad_productos;i++){
		printf("\nEl valor es de: %d %d",codigo_producto[i],precio_producto[i]);
	}
	printf("\n");
}

int BuscarProducto(int codigo_producto[], int codigo_buscado, int cantidad_productos){
	// Busqueda de producto recorriendo todo el vector
	int i;
	// Si hay un error, se puede retornar un -1, manejando el error
	for(i=0;i<cantidad_productos;i++){
		if(codigo_producto[i] == codigo_buscado){
			return i;
		}
	}
	return -1;
}


void ActualizarTotal(int *total_puntero, int monto_venta){
	*total_puntero += monto_venta;
}
