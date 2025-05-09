#include <stdio.h>
#include <string.h>

int main()
{   
    char cadena1[50], cadena2[50];
	printf("Favor de ingresar una oración para la cadena 1:\n");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("Favor de ingresar una oración para la cadena 2:\n");
    fgets(cadena2, sizeof(cadena2), stdin);

    if(strcmp(cadena1, cadena2) == 0){
        printf("Las cadenas son iguales");
    } else{
        printf("Las cadenas no son iguales");
    }


    return 0;
}

