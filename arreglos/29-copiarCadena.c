#include <stdio.h>
#include <string.h>

int main()
{   
    char cadena1[50], cadena2[50];
	printf("Favor de ingresar una oración para la cadena:\n");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';
    strcpy(cadena2, cadena1);

    printf("La oracion ingresada es : '%s', y su copia es '%s'", cadena1, cadena2);

    return 0;
}