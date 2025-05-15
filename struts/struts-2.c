/*Ingresar numero de cuenta, utilizar busqueda binaria para buscar ese numero de cuenta en el banco*/

#include <stdio.h>
#include <conio.h>
#define nro 3

struct cuentas
{
    int numeroCuenta;
    char nombre[30];
    int saldo;
};


int main() {
    struct cuentas cuen[nro] = {
        {5648, "Pablo", 6989}, 
        {5649, "Martin", 6989}, 
        {5650, "Gonzalo", 6989}
    }, temp;
    int pos, nroCuenta;
    printf("Ingrese el numero de cuenta a buscar:\n");
    scanf("%d", &nroCuenta);

    //Bubble sort
    for (int i = 0; i < nro - 1; i++)
    {
        for (int j = 0; j < nro - i - 1; j++)
        {
            if (cuen[j].numeroCuenta > cuen[j+1].numeroCuenta)
            {
                temp = cuen[j];
                cuen[j] = cuen[j+1];
                cuen[j+1] = temp;
            }
        }
        
    }

    pos = buscarCuenta(cuen, nro, nroCuenta);

    if (pos != -1) {
    printf("Cuenta encontrada:\n");
    printf("Numero: %d, Nombre: %s, Saldo: %d\n", cuen[pos].numeroCuenta, cuen[pos].nombre, cuen[pos].saldo);
} else {
    printf("La cuenta no fue encontrada.\n");
}

	return 0;
}


int buscarCuenta(struct cuentas cuen[], int tam, int cuentaBuscada) {
    int inicio = 0;
    int fin = tam - 1;
    int medio;

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (cuen[medio].numeroCuenta == cuentaBuscada) {
            return medio; // devuelve la posición encontrada
        } else if (cuen[medio].numeroCuenta < cuentaBuscada) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    return -1; // no encontrado
}