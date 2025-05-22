#include <stdio.h>

void contarAtras(int n){
    if(n==0){
        printf("Listo");
    } else {
        printf("%d\n", n);
        printf("Aca hay recursividad\n");
        contarAtras(n-1);
    }
}

int main()
{
    contarAtras(5);
    return 0;
}
