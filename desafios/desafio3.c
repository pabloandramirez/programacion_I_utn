#include <stdio.h>

int main()
{
    int opcion;
    do
    {
        int numero1, numero2;
        printf("*********************************\n");
        printf("\t \t CALCULADORA\n");
        printf("*********************************\n");
        printf("\t1 - Suma\n");
        printf("\t2 - Resta\n");
        printf("\t3 - Tabla de multiplicar\n");
        printf("\t0 - Salir\n");
        printf("\tINGRESE UNA OPCION, O SI DESEA SALIR INGRESE CERO\n");
        scanf("%d", &opcion);

        if (opcion>0 && opcion<4)
        {
            printf("Ingrese el primer valor\n");
            scanf("%d", &numero1);

            printf("Ingrese el segundo valor\n");
            scanf("%d", &numero2);
        }
        switch (opcion)
        {
        case 1:
            /* code */
            int suma = 0;
            suma = numero1 + numero2;
            printf("El resultado de la suma es %d\n", suma);
            break;
        case 2:
            /* code */
            int resta = 0;
            resta = numero1 - numero2;
            printf("El resultado de la resta es %d\n", resta);
            break;
        case 3:
            /* code */
            int producto = 0;

            for (int i = 1; i <= numero2; i++)
            {
                int producto = numero1 * i;
                printf("%d x %d = %d\n", numero1, i, producto);
            }
            break;
        case 0:
            printf("Hasta luego\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
        };
        printf("\tINGRESE CUALQUIER VALOR SI DESEA SEGUIR, O SI DESEA SALIR INGRESE CERO\n");
        scanf("%d", &opcion);
    } while (opcion!=0);
    
    return 0;
}

