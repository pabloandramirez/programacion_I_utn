#include <stdio.h>

int factorialNumero(int a);

int main()
{
    int numero, resultado;

    printf("Ingrese el numero:\n");
    scanf("%d", &numero);

    resultado = factorialNumero(numero);
    printf("El factorial del numero es:\n%d", resultado);
    return 0;
}

int factorialNumero(int a){
    int resultado = 1;
    for (int i = 1; i <= a; i++)
    {
        resultado *= i;
    }
    return resultado;
}