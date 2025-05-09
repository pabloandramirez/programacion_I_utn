#include <stdio.h>
#include <string.h>

int main()
{   
    int contador;
    contador = 0;
    char cadena[50];
	printf("Favor de ingresar una frase para contar sus palabras:\n");
    fgets(cadena, sizeof(cadena), stdin);

    int len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++)
    {
        if(cadena[i]==' '){
            if(cadena[i-1] != ' ' || cadena[i+1] != ' '){
                contador += 1;
            }
        } 
        if(i == (len - 1)){
            if(cadena[len - 1] !=' '){
                contador += 1;
            }
        }
    }
    

    printf("La cantidad de palabras es: %d\n", contador);    

    return 0;
}