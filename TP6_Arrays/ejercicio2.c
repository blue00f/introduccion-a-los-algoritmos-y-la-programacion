#include <stdio.h>
#include <stdlib.h>

void salidaDeDatos(float promedioSueldo, float promedioSueldoRangoEdad, float promedioEdad);

int main(int argc, char *argv[]){
    int tamanio=10, tamanioRangoEdad=0;
    int sueldos[tamanio], edades[tamanio];
    int i;
    int acumSueldo=0, acumEdad=0, acumSueldoRangoEdad=0;
    float promedioSueldo, promedioSueldoRangoEdad=0, promedioEdad;

    for(i=0; i<tamanio; i++){
        printf("\nIngrese el sueldo del empleado %d: ", i+1);
        scanf("%d", &sueldos[i]);
        printf("Ingrese la edad del empleado %d: ", i+1);
        scanf("%d", &edades[i]);
        acumSueldo+=sueldos[i];
        acumEdad+=edades[i];
        if(edades[i]>=23 && edades[i]<=40){
            acumSueldoRangoEdad+=sueldos[i];
            tamanioRangoEdad++;
        }
    }

    promedioSueldo=(float)acumSueldo/(float)tamanio;
    if(tamanioRangoEdad>0){
        promedioSueldoRangoEdad=(float)acumSueldoRangoEdad/(float)tamanioRangoEdad;
    }
    promedioEdad=(float)acumEdad/(float)tamanio;

    salidaDeDatos(promedioSueldo, promedioSueldoRangoEdad, promedioEdad);
}

void salidaDeDatos(float promedioSueldo, float promedioSueldoRangoEdad, float promedioEdad){
    printf("\nSueldo promedio: %.2f", promedioSueldo);
    printf("\nSueldo promedio de los empleados que tienen entre 23 y 40 a%cos: %.2f",164,promedioSueldoRangoEdad);
    printf("\nEdad promedio: %.2f", promedioEdad);
}
