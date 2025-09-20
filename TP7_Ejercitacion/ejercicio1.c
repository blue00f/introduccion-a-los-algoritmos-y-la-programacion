#include <stdio.h>
#include <stdlib.h>

void ordenarVector(int elementos[]);
void mostrarVector(int elementos[]);

int main(int argc, char *argv[]){
    int elementos[20];
    int num,i;
    for(i=0;i<20;i++){
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d",&num);
        elementos[i]=num;
    }
    ordenarVector(elementos);
    mostrarVector(elementos);
    return 0;
}

void ordenarVector(int elementos[]){
    int aux;
    int i,j;
    for(i=0;i<20-1;i++){
        for(j=0;j<20-1-i;j++){
            if(elementos[j]<elementos[j+1]){
                aux=elementos[j];
                elementos[j]=elementos[j+1];
                elementos[j+1]=aux;
            }
        }
    }
}

void mostrarVector(int elementos[]){
    int i;
    for(i=0;i<20;i++){
        printf("\nvec[%d]: %d",i,elementos[i]);
    }
}
