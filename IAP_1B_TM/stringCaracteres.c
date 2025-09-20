#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char* nombres[3];
    int i=0;
    nombres[0]="luis";
    nombres[1]="roberto";
    nombres[2]="carlos";

    for(i=0; i<3; i++){
        printf("\nNombre %d es: %s", i+1,nombres[i]);
    }
    return 0;
}
