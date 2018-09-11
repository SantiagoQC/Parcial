/*
Programa:Nombre con mas letras
elaborado por: Santiago Quintero C.
fecha: 11/09/2018
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char nombre1[40];
	char nombre2[40];
	int n1,n2;
	printf("Ingrese 1er nombre: ");
		gets(nombre1);
	printf("Ingrese 2do nombre: ");
		gets(nombre2);
		n1=strlen(nombre1);//Cuenta las letras de la cadena
		n2=strlen(nombre2);//Cuenta las letras de la cadena
		if (n1>n2){//para comparar
			printf("\n1. %s",nombre1);
		    printf("\n2. %s",nombre2);
		}
		else{//la negacion
			printf("\n1. %s",nombre2);
		    printf("\n2. %s",nombre1);
		}
		
	return 0;
}

