#include <stdio.h>


void numeroReversa(int n){
    if(n>0){
        int ultimoDigito = n % 10;
        printf("%d", ultimoDigito);
        numeroReversa(n/10);
    }
}

int main()
{
    printf("El numero en reverso es:\n");
    numeroReversa(978);
    return 0;
}