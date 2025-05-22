#include <stdio.h>

int cantidadCifras(int n){
    int cantidad = 0;
    if(n>0){
        int numero = n / 10;
        cantidad = 1 + cantidadCifras(numero);
    } else {
        return cantidad;
    }
}

int main()
{
    int resultado = cantidadCifras(587);
    printf("Cantidad de cifras: %d", resultado);
}
