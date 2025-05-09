#include <stdio.h>
#include <string.h>

int main()
{   
    char c[15];
	printf("Favor de ingresar una oración para contar los caracteres:\n");
    gets(c);

    printf("La longitud de la oración es: %lu\n", strlen(c));

    return 0;
}

