#include <stdio.h>
#include <string.h>

int main()
{   
    int contador;
    contador = 0;
    char cadena[50];
	printf("Favor de ingresar una oración para la cadena:\n");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; i < strlen(cadena); i++)
    {
        switch (cadena[i]) 
        {
        case 'A':
        case 'a':
            printf("Tiene una letra A\n");
            contador += 1;
            break;
        case 'E':
        case 'e':
            printf("Tiene una letra E\n");
            contador += 1;
            break;
        case 'I':
        case 'i':
            printf("Tiene una letra I\n");
            contador += 1;
            break;
        case 'O':
        case 'o':
            printf("Tiene una letra O\n");
            contador += 1;
            break;
        case 'U':
        case 'u':
            printf("Tiene una letra U\n");
            contador += 1;
            break;
        default:
            printf("No es una vocal\n");
            break;
        };
    }

    printf("Contador de vocales: %i", contador);

    return 0;
}