#include <stdio.h>
#include <string.h>

int main()
{
    int numeroMatrizM, numeroMatrizN;
    int matrizM[3][3];

    int matrizN[3][3];

    int matrizResultado[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Favor de ingresar el numero para la primera matriz en la posicion [%d][%d]", i, j);
            scanf(" %i", &matrizM[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Favor de ingresar el numero para la segunda matriz en la posicion [%d][%d]", i, j);
            scanf(" %i", &matrizN[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                numeroMatrizM = matrizM[i][k];
                numeroMatrizN = matrizN[k][j];
                matrizResultado[i][j] += numeroMatrizM * numeroMatrizN;
            }
        }
    }

    printf("La matriz resultado es:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("%i\t", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

