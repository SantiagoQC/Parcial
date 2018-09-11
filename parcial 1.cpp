#include <iostream>
/*
Programa:Calcula desempeño
elaborado por: Santiago Quintero C.
fecha: 11/09/2018
*/
using namespace std;

int main(int argc, char *argv[]) {
	char n;
	float numpreg, acert, nivel;
	
	while(n != 'n'){//ciclo pra que el usuario siga introduciendo informacion
	
	printf("\nIngrese el numero de preguntas realizadas: ");
	scanf("%f",&numpreg);
	printf("\nIngrese el numero de preguntas acertadas: ");
		scanf("%f",&acert);
	nivel = (acert/numpreg)*100;
	if(nivel>=85){//comparador de porcentajes
		printf("Porcentaje Acertadas: %.0f  Nivel Maximo \n", nivel);
	}
	else if(nivel>=70){
		printf("Porcentaje Acertadas: %.0f Nivel Medio \n ", nivel);
		
	}
	else if(nivel>=40){
		printf("Porcentaje Acertadas: %.0f Nivel Regular \n", nivel);
		
	}
	else if(nivel<40){
		printf("Porcentaje Acertadas: %.0f Fuera De Nivel \n ", nivel);
		
	}
	printf("Desea continuar? [s/n]: ");
	scanf("%s",&n);//lee si el usuario quiere continuaro parar el programa
	}
	
	return 0;
}

