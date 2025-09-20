#include <stdio.h>
#include <stdlib.h>

void calcular(int a, int b, int *resultadoSuma, int *resultadoResta);

int main(int argc, char *argv[]) {
	int resSuma=0;
	int resResta=0;
	
	printf("el valor de la suma es de %d\n", resSuma);
	printf("el valor de la resta es de %d\n", resResta);
	
	/*
		pasamos como parametros la direccion de memoria
		de resSuma y resResta
	*/
	calcular(10,20,&resSuma,&resResta);
	printf("el valor de la suma es de %d\n", resSuma);
	printf("el valor de la resta es de %d\n", resResta);
}

/*
	este procedimiento recibe dos parametros que son punteros,
	para la invocacion vamos a pasarle dos direcciones de memoria
*/
void calcular(int a, int b, int *resultadoSuma, int *resultadoResta){
	*resultadoSuma = a+b;
	*resultadoResta = a-b;
}

