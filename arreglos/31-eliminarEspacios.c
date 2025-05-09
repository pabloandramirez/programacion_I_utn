#include <stdio.h>
#include <string.h>

int main()
{   
    char cadena[50];
	printf("Favor de ingresar una frase para eliminar los espacios:\n");
    fgets(cadena, sizeof(cadena), stdin);

    int len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++)
    {
        if(cadena[i]==' '){
            for (int j = i; j < len; j++)
            {
                if(j < len-1){
                    cadena[j] = cadena[j+1];
                } else{
                    cadena[j] = '\0';
                }
            }   
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c, ", cadena[i]);
    }
    

    printf("La longitud final es: %d\n", strlen(cadena));    
    printf("La frase sin espacios es: %s", cadena);

    return 0;
}