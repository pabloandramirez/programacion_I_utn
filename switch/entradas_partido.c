#include <stdio.h>

int main()
{

    int cantidadEntradas, totalPagar;
    char opcion;
    printf("****************************************************************************************\n");
    printf("\t\t\tBIENVENIDOS AL ESTADIO CUSCATLAN\n");
    printf("****************************************************************************************\n");
    printf("*Sectores del estadio\n");
    printf("*\tA- Sol general\n");
    printf("*\tB- Sol preferente\n");
    printf("*\tC- Sombra\n");
    printf("*\tD- Tribuna\n");
    printf("*\tE- Platea\n");
    printf("****************************************************************************************\n");
    printf("Selecciona la letra del sector del estadio:\n");
    scanf("%c", &opcion);

    switch (opcion)
    {
    case 'OPCION':
        printf("¿Cuántas entradas Sol general desea comprar?\n");
        scanf("%d", &cantidadEntradas);
        if (cantidadEntradas <= 0)
        {
            printf("La cantidad de entradas debe ser mayor a 0\n");
        } else
        {
            totalPagar = cantidadEntradas * 3;
            printf("El total a pagar es: $%d\n", totalPagar);
        };
        break;
    case 'B':
        printf("¿Cuántas entradas Sol preferente desea comprar?\n");
        scanf("%d", &cantidadEntradas);
        if (cantidadEntradas <= 0)
        {
            printf("La cantidad de entradas debe ser mayor a 0\n");
        } else
        {
            totalPagar = cantidadEntradas * 5;
            printf("El total a pagar es: $%d\n", totalPagar);
        };
        break;
    case 'C':
        printf("¿Cuántas entradas Sol preferente desea comprar?\n");
        scanf("%d", &cantidadEntradas);
        if (cantidadEntradas <= 0)
        {
            printf("La cantidad de entradas debe ser mayor a 0\n");
        } else
        {
            totalPagar = cantidadEntradas * 8;
            printf("El total a pagar es: $%d\n", totalPagar);
        };
        break;
    case 'D':
        printf("¿Cuántas entradas en Tribuna desea comprar?\n");
        scanf("%d", &cantidadEntradas);
        if (cantidadEntradas <= 0)
        {
            printf("La cantidad de entradas debe ser mayor a 0\n");
        } else
        {
            totalPagar = cantidadEntradas * 15;
            printf("El total a pagar es: $%d\n", totalPagar);
        };
        break;
    case 'E':
        printf("¿Cuántas entradas en platea desea comprar?\n");
        scanf("%d", &cantidadEntradas);
        if (cantidadEntradas <= 0)
        {
            printf("La cantidad de entradas debe ser mayor a 0\n");
        } else
        {
            totalPagar = cantidadEntradas * 3;
            printf("El total a pagar es: $%d\n", totalPagar);
        };
        break;
    default:
        printf("Opción no válida\n");
        break;
    }

    return 0;
}
