#include <stdio.h>
#include <string.h>

int main()
{   
    char cadena[50], cadenaInvertida[50];
	printf("Favor de ingresar una frase para mostrarla de forma invertida:\n");
    fgets(cadena, sizeof(cadena), stdin);

    int len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
        len--;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        cadenaInvertida[i] = cadena[(len - 1) - i];
    }
    

    printf("La frase invertida es: %s\n", cadenaInvertida);    

    return 0;
}