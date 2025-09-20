#include <stdio.h>
#include <stdlib.h>

void mostrarVectorInvertido(int vector[], int tamanio);

int main(int argc, char *argv[]){
    int tamanio=15;
    int elementos[tamanio];
    int acumSuma=0, acumProducto=1;
    int i;

    for(i=0; i<tamanio; i++){
        printf("Elemento [%d]: ", i+1);
        scanf("%d", &elementos[i]);
        acumSuma+=elementos[i];
        acumProducto*=elementos[i];
    }

    printf("Suma de todos los elementos: %d", acumSuma);
    printf("\nProducto de todos los elementos: %d", acumProducto);
    mostrarVectorInvertido(elementos, tamanio);
}

void mostrarVectorInvertido(int vector[], int tamanio){
    int i;
    for(i=tamanio-1; i>=0; i--){
        printf("\nElemento [%d]: %d", i+1, vector[i]);
    }
}
