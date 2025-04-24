#include <stdio.h>
#include <string.h>

int main()
{
    char frase1[100], frase2[100], frase3[100];
    int cantidad1, cantidad2, cantidad3, maximo;
    maximo=100;
    printf("Ingresar la primer frase\n");
    fgets(frase1, maximo, stdin);
    printf("Ingresar la segunda frase\n");
    fgets(frase2, maximo, stdin);
    printf("Ingresar la tercera frase\n");
    fgets(frase3, maximo, stdin);
    cantidad1 = strlen(frase1);
    cantidad2 = strlen(frase2);
    cantidad3 = strlen(frase3);

    if(cantidad1>cantidad2){
		if(cantidad2>cantidad3){
			printf("%s\n %s\n %s\n", frase1, frase2, frase3);
		} else{
			if(cantidad1>cantidad3){
				printf("%s\n %s\n %s\n", frase1, frase3, frase2);
			} else {
				printf("%s\n %s\n %s\n", frase3, frase1, frase2);
			}
		}
	} else if(cantidad1>cantidad3){
		printf("%s\n %s\n %s\n", frase2, frase1, frase3);
	} else if(cantidad2>cantidad3){
		printf("%s\n %s\n %s\n", frase2, frase3, frase1);
	} else {
		printf("%s\n %s\n %s\n", frase3, frase2, frase1);
	}


    return 0;
}

