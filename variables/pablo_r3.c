#include <stdio.h>
#include <conio.h>

int main() {
	
	char c[15];
	int edad;
	char car;
	printf("Favor de ingresar un nombre para imprimir:\n");
	gets(c);
	printf("El nombre ingresado es: ");
	puts(c);
	printf("\n");
	printf("Mi nombre es: %s\n", c);
	printf("Favor de ingresar una edad para imprimir:\n");
	scanf("%d", &edad);
	printf("Mi nombres es %s y mi edad es %i\n", c, edad);
	printf("Ingrese un caracter por teclado\n");
	scanf(" %c", &car);
	printf("Es caracter ingresado es % c", car);
	
	return 0;
}

