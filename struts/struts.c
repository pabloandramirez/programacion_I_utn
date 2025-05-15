/*Ingresar los numeros, nombres y saldos de 3 cuentas diferentes, luego ordenar por numeros de cuenta*/

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
	struct cuentas cuen[nro], temp;
    int i, j, deudor=0, acreedor=0;
    int contador;


    for (int i = 0; i < nro; i++)
    {
        printf("Ingrese datos de estructura: %d\n",i+1);

        printf("Ingrese Numero de Cuenta\n");
        scanf("%d", &cuen[i].numeroCuenta);

        printf("Ingrese Nombre del Titular\n");
        scanf("%s", &cuen[i].nombre);

        printf("Ingrese Saldo de Cuenta\n");
        scanf("%d", &cuen[i].saldo);

        contador += cuen[i].saldo;
    }
    
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

    printf("\tNumero de cuenta  -  Nombre  -  Saldo\n");

    for (int i = 0; i < nro; i++)
    {
        printf("\t%d\t",cuen[i].numeroCuenta);
        printf("\t%s\t",cuen[i].nombre);
        printf("\t%d\t",cuen[i].saldo);
        printf("\n");
    }
    
    printf("\nTotal de saldo es: %d", contador);

	return 0;
}