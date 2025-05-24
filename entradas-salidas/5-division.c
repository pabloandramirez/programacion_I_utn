#include <stdio.h>

int main(){
    float numeroDecimal, otroNumeroDecimal;

    printf("Ingrese el primer número decimal\n");
    scanf("%f", &numeroDecimal);
    printf("Ingrese el segundo número decimal\n");
    scanf("%f", &otroNumeroDecimal);

    printf("El resultado de la division es: %.2f", numeroDecimal/otroNumeroDecimal);

    return 0;
}