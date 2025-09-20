#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool detectarAguaHirviendo(int temperatura);
bool detectarAguaCongelada(int temperatura);

int main(int argc, char *argv[]) {
    bool opcion=1, estaHirviendo, estaCongelada;
    int temperatura;
    printf("---Sensor de agua que detecta el agua hierve o se congela---\n");

    while(opcion==1){
        printf("Ingresar temperatura: ");
        scanf("%d", &temperatura);
        estaHirviendo=detectarAguaHirviendo(temperatura);
        estaCongelada=detectarAguaCongelada(temperatura);

        if(estaHirviendo==1){
            printf("AGUA HIRVIENDO");
        }
        if(estaCongelada==1){
            printf("AGUA CONGELANDO");
        }

        printf("\n\nIngresar otra temperatura (1-Si/0-No): ");
        scanf("%d", &opcion);
    }
    system("pause");
    return 0;
}

bool detectarAguaHirviendo(int temperatura){
    bool estaHirviendo;
    if(temperatura>=100){
        return estaHirviendo=1;
    }
    else {
        return estaHirviendo=0;
    }
}

bool detectarAguaCongelada(int temperatura){
    bool estaCongelada;
    if(temperatura<=0){
        return estaCongelada=1;
    }
    else {
        return estaCongelada=0;
    }
}
