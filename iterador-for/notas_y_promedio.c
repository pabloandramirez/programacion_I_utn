#include <stdio.h>

int main()
{
    int cantidadNotas, acumulador, superior; 
    acumulador=0;
    float promedio;
    printf("Ingrese la cantidad de notas para sacar el promedio\n");
    scanf("%d", &cantidadNotas);

    for (int i = 1; i <= cantidadNotas; i++)
    {
        int nota;
        printf("Ingrese la nota\n");
        scanf("%d", &nota);
        acumulador = acumulador + nota;
    }

    promedio = (float) acumulador / cantidadNotas; //parseo de datos porque 2 datos del mismo tipo da como resultado uno del mismo grupo

    printf("El promedio de las notas es %f\n", promedio);

    return 0;
}
