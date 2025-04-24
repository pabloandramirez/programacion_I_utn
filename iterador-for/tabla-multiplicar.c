#include <stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero para mostrar su tabla de multiplicar\n");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        int producto = numero * i;
        printf("%d %d %d\n", numero, i, producto);
    }
    

    return 0;
}
