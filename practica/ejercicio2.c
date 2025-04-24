/*realizar un programa que me permita determinar si un triangulo es equolatro, isoceles o escaleno*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int lado1, lado2, lado3;
    printf("Favor de ingresar el primer lado\n");
    scanf("%d", &lado1);
    printf("Favor de ingresar el segundo lado\n");
    scanf("%d", &lado2);
    printf("Favor de ingresar el tercer lado\n");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("El triangulo es equilatero");
    } else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("El triangulo es isosceles");
    } else{
        printf("El triangulo es escaleno");
    }
    


	return 0;
}


