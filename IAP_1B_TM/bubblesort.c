#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(int argc, char *argv[]) {
	//creo un array desordenado
	int miArray[]={10,4,14,90,17,1,9,11,23,61};
	int dato;
	int i;
	ordenar(miArray); //invoco la funcion ordenar
	for(i=0;i<10;i++){
		printf("El valor de la pos %d es %d\n",i,miArray[i]);
	}
}


void ordenar(int array[]){

	int n = 10;
	int i,y,aux=0; 
	for(i=0;i<n-1;i++){ //recorro el array hasta dos posiciones antes del final
		for(y=0;y<n-i-1;y++){ //por cada posicion, vuelvo a recorrerlo todo
		
		//comparo con la posici�n siguiente, si es mayor...
		//cambiando la comparacion se puede ordenar ascendente o descendentemente
			if (array[y]<array[y+1]){ 
				 //utilizo una variable auxiliar para guardar temporalmente el valor actual
				aux=array[y];
				//guardo en la posicion actual, el valor de la siguiente
				array[y]=array[y+1];
				//guardo en la posicion siguente el valor que teniamos en aux 
				array[y+1]=aux;
			}
		}
	}
}


