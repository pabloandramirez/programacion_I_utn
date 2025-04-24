#include <stdio.h>

int main() {
	
	int a, b, c;
    printf("Calcular las raíces de una ecuación cuadrática\n");
	printf("Favor de ingresar el primer numero\n");
	scanf("%d",&a);
	printf("Favor de ingresar el segundo numero\n");
	scanf("%d",&b);
	printf("Favor de ingresar el tercer numero\n");
	scanf("%d",&c);
	
	if(a>b){
		if(b>c){
			printf("%d %d %d", a, b, c);
		} else{
			if(a>c){
				printf("%d %d %d", a, c, b);
			} else {
				printf("%d %d %d", c, a, b);
			}
		}
	} else if(a>c){
		printf("%d %d %d", b, a, c);
	} else if(b>c){
		printf("%d %d %d", b, c, a);
	} else {
		printf("%d %d %d", c, b, a);
	}
	
	return 0;
}

