/*
Programa:Calcula desempeño
elaborado por: Santiago Quintero C.
fecha: 11/09/2018
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num=1, par=0, imp=0;
	while(num != 0){//bucle hasta que ingresen 0
	printf("\n\nIngrese numero entero: ");
	scanf("%d",&num);//guarda el numero en la variable num
	if(num %2==0){
		par++;//contador de pares
	
	}
	else{
		imp++;//contador de impares
	}
	}
	par=par-1;//Para que no me cuente el 0
	printf("\n\nSe introdujeron %d numeros pares y %d numeros impares",par,imp);
	
	
	return 0;
}

