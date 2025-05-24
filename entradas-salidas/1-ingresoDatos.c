#include <stdio.h>

int main(){
    char nombre[50];
    int edad, altura;
    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Ingrese su edad:\n");
    scanf("%d", &edad);
    printf("Ingrese su altura en centimetros:\n");
    scanf("%d", &altura);

    printf("Su nombre es %s", nombre);
    printf("Su edad es %i\n", edad);
    printf("Su altura es de %i centimetros", altura);
    return 0;
}