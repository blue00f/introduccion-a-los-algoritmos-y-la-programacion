#include <stdio.h>
#include <stdlib.h>

int busquedaSecuencial(int elementos[],int cantElementos,int numeroBuscado,int *iteracionesMetodo);
int busquedaBinaria(int elementos[],int cantElementos,int numeroBuscado,int *iteracionesMetodo);

int main(int argc, char *argv[]){
    int cantidadElementos=15;
    int elementos[cantidadElementos];
    int i,numero,numMetodo,indiceNumeroBuscado=0;
    int iteracionesMetodo=0;

    for(i=0;i<cantidadElementos;i++){
        printf("Ingrese el valor para el elemento %d: ",i+1);
        scanf("%d",&elementos[i]);
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d",&numero);
    printf("\n--------------------------------------------------\n");
    printf("Ingrese el metodo para buscar el numero:\n");
    printf("\t1. Algoritmo de busqueda secuencial\n");
    printf("\t2. Algoritmo de busqueda binaria\n");
    printf("Opcion: ");
    scanf("%d",&numMetodo);
    printf("--------------------------------------------------\n");

    switch(numMetodo){
        case 1:
            indiceNumeroBuscado=busquedaSecuencial(elementos,cantidadElementos,numero,&iteracionesMetodo);
            if(indiceNumeroBuscado!=-1){
                printf("\nNumero: %d",numero);
                printf("\nPosicion: %d",indiceNumeroBuscado+1);
                printf("\nIteraciones hechas: %d",iteracionesMetodo);
            }
            else {
                printf("\nNumero no encontrado");
            }
            break;
        case 2:
            indiceNumeroBuscado=busquedaBinaria(elementos,cantidadElementos,numero,&iteracionesMetodo);
            printf("\nNumero: %d",numero);
            printf("\nPosicion: %d",indiceNumeroBuscado+1);
            printf("\nIteraciones hechas: %d",iteracionesMetodo);
            break;
    }

    return 0;
}

int busquedaSecuencial(int elementos[],int cantElementos,int numeroBuscado,int *iteracionesMetodo){
    int i;
    for(i=0;i<cantElementos;i++){
        *iteracionesMetodo=*iteracionesMetodo+1;
        if(elementos[i]==numeroBuscado){
            return i;
        }
    }
    return -1;
}

int busquedaBinaria(int elementos[],int cantElementos,int numeroBuscado,int *iteracionesMetodo){
    int inf=0,sup,centro=0;
    sup=cantElementos-1;
    while(inf<=sup){
        *iteracionesMetodo=*iteracionesMetodo+1;
        centro=((sup-inf)/2)+inf;
        if(elementos[centro]==numeroBuscado){
            return centro;
        }
        else{
            if(numeroBuscado<elementos[centro]){
                sup=centro-1;
            }
            else{
                inf=centro+1;
            }
        }
    }
}
