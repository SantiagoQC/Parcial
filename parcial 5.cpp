/*
Programa:Calcula desempeño
elaborado por: Santiago Quintero C.
fecha: 11/09/2018
*/
#include <iostream>
using namespace std;
void cuadrado(){
	float num,op;
	printf("Ingrese numero para elevarlo al acuadrado: ");
	scanf("%f",&num);
	op=num*num;//operacion para elevar al cuadrado
	printf("El numero que ingreso elevado al cuadrado es: %.2f",op);
}

int main(int argc, char *argv[]) {
	cuadrado();
	
	return 0;
}

