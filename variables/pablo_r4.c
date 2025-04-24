#include <stdio.h>

int main() {
	
	int numero1, numero2, resultado;
	float numFloat;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numero1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numero2);
	resultado = numero1 + numero2;
	printf("La suma de %d + %d = %d", numero1, numero2, resultado);
	printf("\n");
	printf("La suma de %d + %d = %d", numero1, numero2, numero1+numero2);
	printf("\n");
	numFloat = 8.23;
	printf("%.2f", numFloat);
	return 0;
}

