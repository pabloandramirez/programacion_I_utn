#include <stdio.h>

int main() {
	
	int numero;
	scanf("%i", &numero);

	
	if(numero > 0)
	{
		printf("El numero es positivo\n");
	} else if(numero < 0)
	{
		printf("El numero es negativo\n");
	} else{
		printf("El numero es cero\n");
	}
	
	printf("Fin del programa");
	return 0;
}