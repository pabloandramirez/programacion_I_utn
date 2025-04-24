#include <stdio.h>
#include <string.h>

int main()
{
    int numeroMatrizM, numeroMatrizN, numeroMatrizProducto;
    numeroMatrizProducto=0;
    int matrizM[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int matrizN[3][3] = {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };

    

    int matrizResultado[3][3];

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

