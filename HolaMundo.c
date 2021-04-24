/*Realizar un programa en lenguaje C que pida la edad y el nombre 
de una persona y lo muestre con un saludo.
Compile por línea de comando*/
#include <stdio.h>
#include <stdlib.h>
/* @Gustavo Apaza Huanca */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nombre[30];
	int edad;
	
	printf("%s", "Ingrese su nombre: ");
	scanf("%s", nombre);
	
	printf("%s", "Ingrese su edad: ");
	scanf("%d", &edad);
	
	printf("%s \n", "");
	printf("%s \n \n", "=========================================================");
	printf("%s \n", "Hola tus datos son:");
	printf("Nombre: %s \n", nombre);
	printf("Edad: %d anios \n \n", edad);
	
	system("pause");
	return 0;
}
