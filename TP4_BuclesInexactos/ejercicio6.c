#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    int numAuto, tiempo;
    char opc;
    int tiempoMax, tiempoMin, primerLugar, ultimoLugar;

    printf("Numero de auto: ");
    scanf("%d", &numAuto);
    printf("Tiempo de llegada (en minutos): ");
    scanf("%d", &tiempo);

    tiempoMax=tiempo;
    tiempoMin=tiempo;
    primerLugar=numAuto;
    ultimoLugar=numAuto;

    printf("Desea ingresar otro auto? (S/N): ");
    scanf(" %c", &opc);

    while(opc=='S' || opc=='s'){
        printf("\nNumero de auto: ");
        scanf("%d", &numAuto);
        printf("Tiempo de llegada (en minutos): ");
        scanf("%d", &tiempo);

        if(tiempo>tiempoMax){
            tiempoMax=tiempo;
            ultimoLugar=numAuto;
        }
        if(tiempo<tiempoMin){
            tiempoMin=tiempo;
            primerLugar=numAuto;
        }

        printf("Desea ingresar otro auto? (S/N): ");
        scanf(" %c", &opc);
    }

    printf("\nPrimer lugar: %d", primerLugar);
    printf("\nUltimo lugar: %d", ultimoLugar);
    return 0;
}
