#include <stdio.h>

int main() {
	
	int opcion, saldo, monto;
	saldo = 10000;
	printf("Favor de ingresar la opcion del cajero:\n");
	printf("1)Ingreso\n");
	printf("2)Extraccion\n");
	scanf("%d",&opcion);

	switch (opcion) 
	{
	case 1:
		printf("Ingresaste la opcion 1\n");
		scanf("%d", &monto);
		saldo = saldo + monto;
		break;
	case 2:
		printf("Ingresaste la opcion 2\n");
		scanf("%d", &monto);
		saldo = saldo - monto;
		break;
	default:
		printf("Ingresaste una opción incorrecta");
		break;
	};
	
	printf("El saldo es %d", saldo);
	
	return 0;
}

