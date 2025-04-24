#include <stdio.h>

int main()
{

    int i, a, contador, suma, b;
    a = 0;
    while(a == 0){
        printf("Ingrese el numero de repeticiones\n");
        scanf("%d", &i);
        contador = 0;
        suma = 0;
        while (contador < i)
        {
            printf("Ingrese un numero\n");
            scanf("%d", &b);
            suma = suma + b;
            contador = contador + 1;
        }
        printf("La suma de los numeros es: %d\n", suma);
        printf("Si quiere hacer otra operacion ingrese cero\n", suma);
        scanf("%d", &a);
    }
    printf("Fin de la operacion");

    return 0;
}
