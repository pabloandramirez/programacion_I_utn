#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero1, numero2, numero3, auxiliar;
	printf("Favor de ingresar el primer valor\n");
	scanf("%d", &numero1);
	printf("Favor de ingresar el segundo valor\n");
	scanf("%d", &numero2);
	printf("Favor de ingresar el tercer valor\n");
	scanf("%d", &numero3);
	
	if(numero1 > numero3)
	{
		auxiliar = numero1;
		numero1 = numero3;
		numero3 = auxiliar;
	}
	if(numero2 > numero3)
	{
		auxiliar = numero2;
		numero2 = numero3;
		numero3 = auxiliar;
	}
	if(numero1 > numero2)
	{
		auxiliar = numero1;
		numero1 = numero2;
		numero2 = auxiliar;
	}
	
	printf("%d %d %d", numero1, numero2,numero3);
	
	return 0;
}
