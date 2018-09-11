/*
Programa:Cuenta letras
elaborado por: Santiago Quintero C.
fecha: 11/09/2018
*/
#include <iostream>
#include <string.h>
using namespace std;
void cantidad()
{
	char nombre[30];//vector
	int numvocal=0,n;
	printf("Introdusca el nombre: ");
	gets(nombre);//reemplaza el scanf
	n=strlen(nombre);//para que me de el numero de letras osea el numero de posiciones del vector
	;
	for(int i=0;i<=n;i++)//ciclo para que compare con cada posicion del vector
	{
		if ((nombre[i]=='a') ||(nombre[i]=='e') ||(nombre[i]=='i') ||(nombre[i]=='o') ||(nombre[i]=='u'))
		{numvocal++;}//contador
		
	}
	printf("El numero de vocales en el nombre es: %d\n", numvocal);
}

int main(int argc, char *argv[]) {
	cantidad();//llamado

	return 0;
}

