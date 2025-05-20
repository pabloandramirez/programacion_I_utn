#include <stdio.h>

float calculoAreaTriangulo(float a, float b);

int main()
{
    float areaTriangulo, altura, base;

    printf("Ingrese la altura del triangulo:\n");
    scanf("%f", &altura);

    printf("Ingrese la base del triangulo:\n");
    scanf("%f", &base);

    areaTriangulo = calculoAreaTriangulo(base, altura);

    printf("El área del triangulo es:\n %.2f", areaTriangulo);
    return 0;
}

float calculoAreaTriangulo(float a, float b){
    float resultado = (a * b)/2;
    return resultado;
}