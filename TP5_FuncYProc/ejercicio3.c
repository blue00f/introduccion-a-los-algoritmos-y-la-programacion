#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool determinarPar(int numero);
bool determinarSigno(int numero);
void infoNumeros(int contPos, int contNeg, int contPar, int contImp);
int ingresarNumero();

int main(int argc, char *argv[]) {
    int contPares=0, contImpares=0, contPositivos=0, contNegativos=0;
    bool esPar, esPositivo;
    int numero;

    numero=ingresarNumero();
    while(numero!=0){
        esPar=determinarPar(numero);
        esPositivo=determinarSigno(numero);
        if(esPar==true){
            contPares++;
        } else {
            contImpares++;
        }

        if(esPositivo==true){
            contPositivos++;
        } else {
            contNegativos++;
        }
        numero=ingresarNumero();
    }
    infoNumeros(contPositivos,contNegativos,contPares,contImpares);
    return 0;
}

bool determinarPar(int numero){
    bool esPar;
    if(numero%2==0){
        esPar=true;
    } else {
        esPar=false;
    }
    return esPar;
}

bool determinarSigno(int numero){
    bool esPositivo;
    if(numero>0){
        esPositivo=true;
    } else {
        esPositivo=false;
    }
    return esPositivo;
}

void infoNumeros(int contPos, int contNeg, int contPar, int contImp){
    printf("\nCantidad de numeros positivos: %d", contPos);
    printf("\nCantidad de numeros negativos: %d", contNeg);
    printf("\nCantidad de numeros pares: %d", contPar);
    printf("\nCantidad de numeros impares: %d", contImp);
}

int ingresarNumero(){
    int numero;
    printf("Ingrese un numero (0 para salir): ");
    scanf("%d", &numero);
    return numero;
}
