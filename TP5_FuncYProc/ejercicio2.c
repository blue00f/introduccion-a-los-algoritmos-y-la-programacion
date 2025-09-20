#include <stdio.h>
#include <stdlib.h>

float sumar(float numA, float numB);
float restar(float numA, float numB);
float multiplicar(float numA, float numB);
float dividir(float numA, float numB);
void menu(int opcion, float numA, float numB);

int main(int argc, char *argv[]) {
    float numA, numB;
    int opc=0;

    printf("Ingrese el numero 1: ");
    scanf("%f", &numA);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numB);

    printf("\nMenu de operaciones:\n1-Sumar\t\t2-Restar\n3-Dividir\t4-Multiplicar\n\nOpcion: ");
    scanf("%d", &opc);

    menu(opc, numA, numB);

    return 0;
}

float sumar(float numA, float numB){
    return numA+numB;
}
float restar(float numA, float numB){
    return numA-numB;
}
float multiplicar(float numA, float numB){
    return numA*numB;
}
float dividir(float numA, float numB){
    if(numB==0){
        return 0;
    }
    else {
        return numA/numB;
    }
}

void menu(int opc, float numA, float numB){
    float suma, resta, producto, division;
    switch(opc){
        case 1:
            suma=sumar(numA,numB);
            printf("Suma: %.2f", suma);
            break;
        case 2:
            resta=restar(numA,numB);
            printf("Resta: %.2f", resta);
            break;
        case 3:
            division=dividir(numA,numB);
            if(division==0){
                printf("No se puede dividir por cero");
            }
            else {
                printf("Division: %.2f", division);
            }
            break;
        case 4:
            producto=multiplicar(numA,numB);
            printf("Producto: %.2f", producto);
            break;
        default:
            printf("Operacion no correcta");
            break;
    }
}
