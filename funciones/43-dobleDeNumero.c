#include <stdio.h>

int doble(int a);
int calculoAreaTriangulo(int a, int b);

int main()
{
    int numero, numeroDuplicado, base, altura, areaTriangulo;
    printf("Ingrese numero a duplicar:\n");
    scanf("%d", &numero);

    printf("Ingrese la altura del triangulo:\n");
    scanf("%d", &altura);

    printf("Ingrese la base del triangulo:\n");
    scanf("%d", &base);

    numeroDuplicado = doble(numero);
    areaTriangulo = calculoAreaTriangulo(base, altura);

    printf("El numero duplicado es:\n %d", numeroDuplicado);
    printf("El área del triangulo es:\n %d", areaTriangulo);
    return 0;
}

int doble(int a){
    a = a * 2;
    return a;
}

int calculoAreaTriangulo(int a, int b){
    int resultado = (a * b)/2;
    return resultado;
}