#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int valorHora, tiempoTrabajado, sueldo;

	printf("Ingresar valor de la hora: ");
	scanf("%d", &valorHora);
	printf("Ingresa tiempo trabajado (en horas): ");
	scanf("%d", &tiempoTrabajado);

	sueldo = valorHora * tiempoTrabajado;
	printf("Sueldo del empleado: %d", sueldo);
	return 0;
}
