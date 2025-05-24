#include <stdio.h>

int main(){
    float numero1, numero2, resultado;
    char operacion;

    printf("Favor de ingresar el primer numero\n");
    scanf("%f", &numero1);
    printf("Favor de ingresar el segundo numero\n");
    scanf("%f", &numero2);
    printf("Favor de ingresar el la operacion a realizar (+, -, *, /)\n");
    scanf(" %c", &operacion);

    if (operacion == '+')
    {
        resultado = numero1 + numero2;
    } else if (operacion == '-')
    {
        resultado = numero1 - numero2;
    } else if (operacion == '*')
    {
        resultado = numero1 * numero2;
    } else if (operacion == '/')
    {
        resultado = numero1 / numero2;
    } else
    {
        printf("La operacion ingresada es incorrecta\n");
    }

    printf("El resultado es %.2f", resultado);

    return 0;
}