#include <stdio.h>

int main()
{

    int lado, perimetro, cantidadErrores;
    perimetro = 0;
    cantidadErrores = 0;
    lado = 0;
    printf("Ingrese un valor mayor a 0\n");
    scanf("%d", &lado);
    while(lado <= 0 && cantidadErrores < 3){//resolver despuesssss
        printf("Ingrese un valor mayor a 0\n");
        scanf("%d", &lado);
        cantidadErrores = cantidadErrores + 1;
        printf("Cantidad de errores: %d\n", cantidadErrores);
    }
    if (cantidadErrores == 3)
    {
        printf("Demasiados errores\n");
    } else
    {
        perimetro = lado * 4;
        printf("El perimetro del cuadrado es: %d\n", perimetro);
    }

    return 0;
}

