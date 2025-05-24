#include <stdio.h>

int main(){
    int numero1, numero2, suma, producto, resta;
    float division;

    printf("Ingrese el primer numero entero:\n");
    scanf("%i", &numero1);
    printf("Ingrese el segundo numero entero:\n");
    scanf("%i", &numero2);
    // suma = numero1 + numero2;
    // producto = numero1 * numero2;
    // resta = numero1 - numero2;
    float numeroFloat = (float)numero1;

    printf("El resultado de la suma es %i\n", (numero1 + numero2));
    printf("El resultado de la resta es %i\n", (numero1 - numero2));
    printf("El resultado del producto es %i\n", (numero1 * numero2));
    printf("El resultado de la division es %.2f\n", numeroFloat/numero2);
    return 0;
}