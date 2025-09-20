#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	unsigned short int codEstado;
	printf("Ingresa el codigo de estado HTTP: ");
	scanf("%hu", &codEstado);
	
	if(codEstado>=200 && codEstado<=299) {
		printf("Codigo OK");
	} else {
		if(codEstado>=400 && codEstado<=499) {
			printf("Error en el cliente");
		} else {
			printf("Codigo de estado no definido");
		}
	}
	return 0;
}


