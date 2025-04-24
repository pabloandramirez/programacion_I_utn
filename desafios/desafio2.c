#include <stdio.h>

int main()
{
    char frase1[100];
    int cantidad1, cantidad2, cantidad3, maximo, vueltas, i;
    maximo=100;
    vueltas=3;
    i=0;

    while (i < vueltas)
    {
        printf("Ingresar la frase\n");
        fgets(frase1, maximo, stdin);
        if(i==0){
            cantidad1 = strlen(frase1);
        } else if (i==1)
        {
            cantidad2 = strlen(frase1);
        } else
        {
            cantidad3 = strlen(frase1);
        };
        i = i + 1;
    }
    
    printf("%d , %d , %d", cantidad1, cantidad2, cantidad3);
    


    return 0;
}

