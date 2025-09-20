#include <stdio.h>
#include <stdlib.h>

int obtenerValorPorCategoria(int numCategoria);
void salidaDeDatos(int contEmpCat1, int contEmpCat2, int contEmpCat3,
    int acumSueldoCat1, int acumSueldoCat2, int acumSueldoCat3,
    float promedioSueldos, int sueldoMax, char nombreSueldoMax[20]
);

int main(int argc, char *argv[]){
    int cantidadEmpleados=15;
    char nombres[cantidadEmpleados][20]; // longitud del nombre, 20 caracteres
    int categorias[cantidadEmpleados];
    int antiguedades[cantidadEmpleados];
    int sueldos[cantidadEmpleados];

    int sueldoMax;
    char* nombreSueldoMax;

    int contEmpCat1=0, contEmpCat2=0, contEmpCat3=0;
    int acumSueldoCat1=0, acumSueldoCat2=0, acumSueldoCat3=0;
    int acumSueldos=0;
    float promedioSueldos;

    int i;
    int categoria, valorCategoria;

    for(i=0; i<cantidadEmpleados; i++){
        printf("\n---DATOS DEL EMPLEADO %d---", i+1);
        printf("\nNombre: ");
        scanf("%s", nombres[i]);

        do{
            printf("Categoria (Elegir entre 1 y 3): ");
            scanf("%d", &categoria);
            valorCategoria = obtenerValorPorCategoria(categoria);
            if(valorCategoria!=0){
                categorias[i]=categoria;
                sueldos[i]=valorCategoria;
            }
        }while(valorCategoria==0);

        printf("Antiguedad en a%cos: ", 164);
        scanf("%d", &antiguedades[i]);
        sueldos[i]+=antiguedades[i]*100;
    }

    sueldoMax=sueldos[0];
    nombreSueldoMax=nombres[0];
    for(i=0; i<cantidadEmpleados; i++){
        if(categorias[i]==1){
            contEmpCat1++;
            acumSueldoCat1+=sueldos[i];
        }
        if(categorias[i]==2){
            contEmpCat2++;
            acumSueldoCat2+=sueldos[i];
        }
        if(categorias[i]==3){
            contEmpCat3++;
            acumSueldoCat3+=sueldos[i];
        }
        if(sueldos[i]>sueldoMax){
            sueldoMax=sueldos[i];
            nombreSueldoMax=nombres[i];
        }
        acumSueldos+=sueldos[i];
    }
    promedioSueldos=(float)acumSueldos/(float)cantidadEmpleados;
    salidaDeDatos(contEmpCat1,contEmpCat2,contEmpCat3,acumSueldoCat1,acumSueldoCat2,acumSueldoCat3,promedioSueldos,sueldoMax,nombreSueldoMax);
}

int obtenerValorPorCategoria(int numCategoria){
    switch(numCategoria){
        case 1:
            return 1500;
            break;
        case 2:
            return 2000;
            break;
        case 3:
            return 2500;
            break;
        default:
            printf("\nCategoria no valida\n");
            return 0;
            break;
    }
}

void salidaDeDatos(int contEmpCat1, int contEmpCat2, int contEmpCat3,
    int acumSueldoCat1, int acumSueldoCat2, int acumSueldoCat3,
    float promedioSueldos, int sueldoMax, char nombreSueldoMax[20]
){
    printf("\n---SALIDA DE DATOS---\n");
    printf("Cantidad de empleados en categoria 1: %d", contEmpCat1);
    printf("\nCantidad de empleados en categoria 2: %d", contEmpCat2);
    printf("\nCantidad de empleados en categoria 3: %d", contEmpCat3);
    printf("\nTotal de sueldos pagados por categoria 1: %d", acumSueldoCat1);
    printf("\nTotal de sueldos pagados por categoria 2: %d", acumSueldoCat2);
    printf("\nTotal de sueldos pagados por categoria 3: %d", acumSueldoCat3);
    printf("\nSueldo promedio general: %.2f", promedioSueldos);
    printf("\nSueldo maximo: %d perteneciente a %s", sueldoMax, nombreSueldoMax);
}
