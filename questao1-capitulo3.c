#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	float x, y;
	float resultado;
	printf("Subtracao de dois numeros\n");
	printf("Valor de x:\n ");
	scanf("%f", &x);
	printf("Valor de y:\n");
	scanf("%f", &y);
	resultado = x - y;
	printf("Resultado: %.2f\n", resultado);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
