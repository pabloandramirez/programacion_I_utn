/*ingresar 2 numeros enteros por teclado y calcular el maximo comun divisor entre ambos*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int numero1, numero2, menor, mayor;
    printf("Favor de ingresar el primer numero\n");
    scanf("%d", &numero1);
    printf("Favor de ingresar el segundo nuermo\n");
    scanf("%d", &numero2);

  if(numero2<numero1){
    menor = numero2;
    mayor = numero1;
  }else{
    menor = numero1;
    mayor = numero2;
  }

  for(int i = menor-1; i>0; i--){
    if(mayor % i==0 && menor % i == 0){
        printf("El MCD es %d", i);
        break;
    }
  }

	return 0;
}


