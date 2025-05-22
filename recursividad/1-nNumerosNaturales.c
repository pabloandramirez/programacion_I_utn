#include <stdio.h>

int suma(int n){
    int resultado = 0;
    if(n==0){
        return resultado;
    } else {
        printf("%d\t", n);
        resultado = n + suma(n - 1);
    }
}

int main()
{
    int resultado = suma(20);
    printf("Resultado: %d", resultado);
}
