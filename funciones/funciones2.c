/* dado un arreglo de 10 elemenos de tipo entero,  se pide: 
    a)ingresar los datos del arreglo en etapa de declaracion
    b)usar el procedimiento para ostrar los elementos del arreglo, uno debajo del otro
    c)indicar cuantos numeros pares tiene el arreglo, con una funcion par o impar
*/

#include <stdio.h>
#define nro 10

void mostrarNumeros(int numeros[]);
void contarPares(int numeros[]);
int parImpar(int numero);
int totalPares = 0;
int temp;
void ordenarArregloNumero(int numero[]);


int main()
{
    int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 9, 8, 10};

    //Para mostrar la cantidad de numeros pares que hay en el arreglo
    //mostrarNumeros(numeros);
    //contarPares(numeros);
    // for (int i = 0; i < 10; i++)
    // {
    //     parImpar(numeros[i]);
    // }
    //printf("Total pares: %d\n", totalPares);


    //Para mostrar los numeros de forma ordenada
    ordenarArregloNumero(numeros);
    mostrarNumeros(numeros);

    return 0;
}

//Procedimiento
void mostrarNumeros(int numeros[]){
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",numeros[i]);
    }
}

//Procedimiento
void contarPares(int numeros[]){
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i]%2 == 0)
        {
            totalPares += 1;
        }
    }
    printf("Total pares: %d\n", totalPares);
}

//Funcion
int parImpar(int numero){
    if (numero % 2 == 0)
    {
        totalPares += 1;
    }
}

//Procedimiento
void ordenarArregloNumero(int numero[]){
    for (int i = 0; i < nro - 1; i++)
    {
        for (int j = 0; j < nro - i - 1; j++)
        {
            if (numero[j] > numero[j+1])
            {
                temp = numero[j];
                numero[j] = numero[j+1];
                numero[j+1] = temp;
            }
        }
    }
}