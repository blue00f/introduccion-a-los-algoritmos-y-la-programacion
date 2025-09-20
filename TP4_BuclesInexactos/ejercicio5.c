#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    float temperatura, temperaturaMayor, temperaturaMenor;
    int contador=0;
    do{
        if(contador==0){
            printf("Ingrese la primera temperatura: ");
            scanf("%f", &temperatura);
            temperaturaMayor=temperatura;
            temperaturaMenor=temperatura;
            contador++;
        }

        printf("Ingresa la temperatura (1000 para salir): ");
        scanf("%f", &temperatura);

        if(temperatura==1000){
            break;
        }
        if(temperatura>temperaturaMayor){
            temperaturaMayor=temperatura;
        }
        if(temperatura<temperaturaMenor){
            temperaturaMenor=temperatura;
        }
    } while(temperatura!=1000);

    printf("\nTemperatura mayor: %.2f", temperaturaMayor);
    printf("\nTemperatura menor: %.2f", temperaturaMenor);
    return 0;
}
