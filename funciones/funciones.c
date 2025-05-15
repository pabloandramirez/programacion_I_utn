#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
void imprimir(char calculo[10], int valor);

int main()
{
    int x,y,z,r;
    printf("Ingrese numero a sumar:\n");
    scanf("%d", &x);
    printf("Ingrese numero a sumar:\n");
    scanf("%d", &y);

    z=suma(x,y);
    r=resta(x,y);
    imprimir("suma",z);
    imprimir("resta",r);
    return 0;
}

//Funcion
int suma(int a, int b){
    int total;
    total = a + b;
    return total;
}

//Funcion
int resta(int a, int b){
    int total;
    total = a - b;
    return total;
}

//Procedimiento
void imprimir(char calculo[], int valor){
    printf("El total de las %s es: %d\n", calculo,valor);
}
