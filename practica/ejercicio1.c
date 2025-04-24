/*La nota de un parcial se compone de la sumatoria de 3 notas que se ingresa por teclado
	a cada una de ellas se le asigna una ponderacion de 0,3  0,5   0,6 respectivamente
la nota final sale de la sumatoria de la suma de cada una de esas notas x su ponderacion

si la nota es <6 el parcial esta desaprobado 
si la nota esta entre 6 y 8 el parcial esta aprobado
si la nota es >=8 esta promocionado 
mostrar por pantalla el calculo de las notas y el resultado del parcial*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int nota1, nota2, nota3;
    float ponderacion1, ponderacion2, ponderacion3, total;
    ponderacion1 = 0.3;
    ponderacion2 = 0.5;
    ponderacion3 = 0.6;
    printf("Favor de ingresar la primer nota\n");
    scanf("%d", &nota1);
    printf("Favor de ingresar la segunda nota\n");
    scanf("%d", &nota2);
    printf("Favor de ingresar la tercera nota\n");
    scanf("%d", &nota3);

    total = (nota1*ponderacion1)+(nota2*ponderacion2)+(nota3*ponderacion3);

    if (total < 6)
    {
        printf("La nota es %.2f", total , ", entonces el parcial esta desaprobado\n");
    } else if(total >= 6 && total < 8){
        printf("La nota es %.2f", total , ", entonces el parcial esta aprobado\n");
    } else{
        printf("La nota es %.2f", total , ", entonces el parcial esta promocionado\n");
    }
    


	return 0;
}


