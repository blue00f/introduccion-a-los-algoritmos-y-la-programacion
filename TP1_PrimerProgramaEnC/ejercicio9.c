#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int tiempoTrabajado, sueldo;
	const int valorHora = 10;

	printf("Ingresa tiempo trabajado (en horas): ");
	scanf("%d", &tiempoTrabajado);

	sueldo = valorHora * tiempoTrabajado;
	printf("Sueldo del empleado: %d", sueldo);
	return 0;
}
