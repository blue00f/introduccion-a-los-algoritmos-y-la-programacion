#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mostrarResultados (int resultados[]){
	int i;
	printf("------------------------------\n");
	for(i=0;i<10;i++){
		if(resultados[i]==1){
			printf("El alumno %d: Aprobo!\n",i);
		}
		else{
			printf("El alumno %d: no aprobo\n",i);
		}
	}
	printf("------------------------------\n");
}

int calcularPorcentaje(int *cantidad){
	int resultado=0;
	resultado= *cantidad * 100/10;
	return resultado;
}

int main(int argc, char *argv[]) {
	int i=0;
	int notas[10];
	int mejorAlumno[2]={0,0};
	int resultados[10];
	int contAprobados=0;
	int contDesaprobados=0;
	int porceAprobados=0;
	int porceDesaprobados=0;
	while(i<10){
		printf("Ingrese la nota del alumno %d:",i);
		scanf("%d",&notas[i]);
		if(notas[i]>mejorAlumno[1]){
			mejorAlumno[0]= i;
			mejorAlumno[1]= notas[i];
		}
		i++;
	}
	i=0;
	while(i<10){
		if(notas[i]>=4){
			resultados[i]=1;
			contAprobados++;
		}
		else{
			resultados[i]=0;
			contDesaprobados++;
		}
		i++;
	}
	mostrarResultados(resultados);
	printf("Aprobaron %d alumnos.\n",contAprobados);
	printf("Desaprobaron %d alumnos.\n",contDesaprobados);
	printf("------------------------------\n");
	porceAprobados=calcularPorcentaje(&contAprobados);
	printf("%d%% de alumnos aprobaron\n",porceAprobados);
	porceDesaprobados=calcularPorcentaje(&contDesaprobados);
	printf("%d%% de alumnos no aprobaron\n",porceDesaprobados );
	printf("------------------------------\n");
	printf("El alumno con la nota mas alta fue el alumno %d con una nota de %d",mejorAlumno[0], mejorAlumno[1]);
	return 0;
}
