#include <stdio.h>

int main(){
    float farenheit, grados;
    
    printf("Ingrese los grados Celsius para pasar a Fahrenheit\n");
    scanf("%f", &grados);

    farenheit = (grados * 9/5) + 32;

    printf("%.0f grados Celsius, son %.2f grados Fahrenheit", grados, farenheit);

    return 0;
}