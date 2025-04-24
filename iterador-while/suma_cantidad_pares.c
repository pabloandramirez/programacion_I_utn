#include <stdio.h>

int main()
{

    int cantidadPares, numero, vueltas, inicio = 1;
    cantidadPares = 0;
    printf("Ingrese la cantidad de numeros a ingresar\n");
    scanf("%d", &vueltas);

    while (inicio <= vueltas){
        printf("Ingrese un numero\n");
        scanf("%d", numero);

        if(numero % 2 == 0){
            printf("Numero: %d\n", numero);
            cantidadPares = cantidadPares + 1;
        }
        inicio = inicio + 1;
    }
    if(cantidadPares == 0){
        printf("No hay pares en los numeros ingresados");
    } else{
        printf("La cantidad de pares es %d", cantidadPares);
    }

    return 0;
}

