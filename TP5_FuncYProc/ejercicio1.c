#include <stdio.h>
#include <stdlib.h>

void infoSueldos(int acumSueldo, float promedio, int sueldoMayor, int sueldoMenor, int contSueldo);
int ingresarSueldo();
int calcularSueldoMayor(int sueldo, int sueldoMay);
int calcularSueldoMenor(int sueldo, int sueldoMen);

int main(int argc, char *argv[]) {
    int opc=1, sueldo, sueldoMayor, sueldoMenor;
    int acumSueldo=0, contSueldo=0;
    float promedio=0;
    sueldo=ingresarSueldo();
    sueldoMayor=sueldo;
    sueldoMenor=sueldo;
    acumSueldo+=sueldo;
    contSueldo++;

    while(opc==1){
        sueldo=ingresarSueldo();
        sueldoMayor=calcularSueldoMayor(sueldo, sueldoMayor);
        sueldoMenor=calcularSueldoMenor(sueldo, sueldoMenor);
        acumSueldo+=sueldo;
        contSueldo++;
        printf("\nIngresar otro sueldo (1-Si/0-No): ");
        scanf("%d", &opc);
    }
    promedio=(float)acumSueldo/(float)contSueldo;
    infoSueldos(acumSueldo, promedio, sueldoMayor, sueldoMenor, contSueldo);
    return 0;
}

void infoSueldos(int acumSueldo, float promedio, int sueldoMayor, int sueldoMenor, int contSueldo){
    printf("\nSuma totales de sueldos: %d", acumSueldo);
    printf("\nPromedio de sueldos: %.2f", promedio);
    printf("\nSueldo mayor: %d", sueldoMayor);
    printf("\nSueldo menor: %d", sueldoMenor);
    printf("\nSueldos ingresados: %d", contSueldo);
}

int ingresarSueldo(){
    int sueldo;
    do{
        printf("Ingresa el sueldo: ");
        scanf("%d", &sueldo);
    }while(sueldo<0);
    return sueldo;
}

int calcularSueldoMayor(int sueldo, int sueldoMay){
    if(sueldo>sueldoMay){
        sueldoMay=sueldo;
    }
    return sueldoMay;
}

int calcularSueldoMenor(int sueldo, int sueldoMen){
    if(sueldo<sueldoMen){
        sueldoMen=sueldo;
    }
    return sueldoMen;
}
