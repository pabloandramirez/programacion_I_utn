#include <stdio.h>

int main(){
    int numero1, numero2, suma;

    printf("Ingrese el primer numero entero:\n");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero entero:\n");
    scanf("%i", &numero2);
    suma = numero1 + numero2;

    printf("El resultado de la suma es %i", suma);
    return 0;
}