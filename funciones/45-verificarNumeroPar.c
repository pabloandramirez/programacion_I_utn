#include <stdio.h>

void verificarNumeroPar(int a);

int main()
{
    int numero;

    printf("Ingrese el numero:\n");
    scanf("%d", &numero);

    verificarNumeroPar(numero);
    return 0;
}

void verificarNumeroPar(int a){
    if (a % 2 == 0)
    {
        printf("El numero es par");
    } else {
        printf("El numero es impar");
    }
}