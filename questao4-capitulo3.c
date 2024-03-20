#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	float x, y;
	float calculo;
	float resultado;
	printf("Media ponderada das notas\n");
	printf("Valor de x:\n ");
	scanf("%f", &x);
	printf("Valor de y:\n");
	scanf("%f", &y);
	calculo = (x * 2) + (y * 3);
	resultado = calculo / 5;
	printf("Resultado: %.2f\n", resultado);
	printf("o programa vai fechar em 5 segundos...");
    sleep(5);
	return 0;
}
