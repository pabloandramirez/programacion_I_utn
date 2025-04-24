/*en un restaurante se desea realizar el calculo de pago de una factura de consumo si corrssponde a un 
servicio del lugar o a un delivery, usar switch para seleccionar el tipo de venta.
si el servicio se hace en el lugar, si el pago es en efectivo se realiza un descuento del 15% y la propina 
es del 10%, si se paga con tarjeta de debito un descuento del 10% y la propina es del 10%, si es con tarjeta 
de credito no hay descuento y la propina es del 10%. en el caso de que sea un servicio por delivery, si el 
pago es por transferencia el descuento es del 15%, el costo del envio sera del 10% del pago. si se paga con 
tarjeta de debito es igual a una transferencia, si se paga con tarjeta el envio es del 15%. imprimir por 
pantalla una factura con el detalle*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char lugarConsumo, tipoPago;
    float precioComida, total;
    char lugarComida[50], metodoPago[50];

    printf("****************************************************************************************\n");
    printf("\t\t\tRESTAURANTE EL BUEN COMER\n");
    printf("****************************************************************************************\n");
    printf("*\t\tPrecio de la comida\n");
    scanf(" %f", &precioComida);
    printf("*\t\tLugar de consumo\n");
    printf("*\tA- Local\n");
    printf("*\tB- Delivery\n");
    printf("****************************************************************************************\n");
    printf("Selecciona la opción:\n");
    scanf(" %c", &lugarConsumo);
    if(lugarConsumo == 'A'){
        strcpy(lugarComida, "Local");
    }
    printf("*\t\tFormas de pago\n");
    if(lugarConsumo == 'A'){
        printf("*\tA- Efectivo\n");
    }
    if(lugarConsumo == 'B'){
        printf("*\tB- Transferencia\n");
    }
    printf("*\tC- Tarjeta de Débito\n");
    printf("*\tD- Tarjeta de Crédito\n");
    printf("****************************************************************************************\n");
    printf("Selecciona la opción:\n");
    scanf(" %c", &tipoPago);
    
    switch (lugarConsumo)
    {
    case 'A':
        printf ("usted pidio en local");
        if(tipoPago == 'A'){
            total = precioComida * 0.85;
            total = total * 1.1;
        } else if(tipoPago == 'C'){
            total = precioComida * 0.9;
            total = total * 1.1;
        } else if(tipoPago == 'D'){
            total = total * 1.1;
        }
        break;
    case 'B':
        printf ("usted pidio delivery");
        if(tipoPago == 'B'){
            total = precioComida * 0.85;
            total = total * 1.1;
        } else if(tipoPago == 'C'){
            total = precioComida * 0.85;
            total = total * 1.1;
        } else if(tipoPago == 'D'){
            total = total * 1.15;
        }
        break;
    default:
        break;
    }

    printf("****************************************************************************************\n");
    printf("\t\t\tFACTURA DE PEDIDO\n");
    printf("****************************************************************************************\n");
    printf("*\t\tPrecio de la comida: \t\t %.2f\n", total);
    printf("*\t\tLugar de consumo\n");
    printf("*\tA- Local\n");
    printf("*\tB- Delivery\n");
    printf("****************************************************************************************\n");

	return 0;
}